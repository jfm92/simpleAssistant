#include <WiFi.h>
#include <WebServer.h>
#include <AutoConnect.h>
#include "serverFrontend.h"
#include "../EEPROMManagement/EEPROMManagement.h"
#include "../../helpers.h"

WebServer           Server;
AutoConnect         Portal(Server);
AutoConnectAux      configMenu;
AutoConnectAux      configSave;

void configPage()
{
    //Redirection to simpleAssitant config page
    String configHeader = "http://" + Server.client().localIP().toString() + "/simpleAssistant";
    Server.sendHeader("Location", configHeader);
    Server.send(302, "text/plain", "");
    Server.client().flush();
    Server.client().stop();
}

String onEvent(AutoConnectAux& aux, PageArgument& args)
{
    //TODO: By the moment after saving API and location data, it's not possible to redirect to main page
    // it's necessary to implement a redirect with a message.
    
    AutoConnectInput& onLocation    = configMenu["acLocation"].as<AutoConnectInput>();
    AutoConnectInput& onAPiKey      = configMenu["acAPI"].as<AutoConnectInput>();
    AutoConnectSelect& onTimeZone   = configMenu["timeZone"].as<AutoConnectSelect>();

    writeEEPROM(onLocation.value.c_str(), LOCATION_CODE_TYPE);
    writeEEPROM(onAPiKey.value.c_str(), API_KEY_TYPE);
    writeEEPROM(onTimeZone.value().c_str(), TIMEZONE_TYPE);
    
    configStateSaveEEPROM(true);

    ESP.restart();

    return "";
}

String initServer(bool wifiOnly)
{
    String ipAddr = "Not connected to WiFi";

    if(!wifiOnly)
    {
        Server.on("/", configPage);
        configMenu.load(SIMPLE_ASSISTANT_FRONT);
        configSave.load(SIMPLE_ASSISTANT_FRONT_SAVE);

        //Add timezone to dropdown menu
        AutoConnectSelect&  tz = configMenu["timeZone"].as<AutoConnectSelect>();
        for (uint8_t n = 0; n < sizeof(TZ) / sizeof(Timezone_t); n++) {
            tz.add(String(TZ[n].zone));
        }
        configSave.on(onEvent);
        Portal.join({ configMenu, configSave }); 
    }

    if (Portal.begin()) {
        Serial.println("WiFi connected: " + WiFi.localIP().toString());
        ipAddr = WiFi.localIP().toString();
    }

    return ipAddr;
}

void handleServer()
{
    Portal.handleClient();
}

void stopServer()
{
    //TODO: Implement somenthing to stop server.
}