#include "EEPROMManagement.h"
#include "../../configHW.h"

EEPROMClass  API_KEY("eeprom0", 0xFF);
EEPROMClass  LOCATION("eeprom1", 0xFF);
EEPROMClass  TIMEZONE("eeprom2", 0xFF);
EEPROMClass  SET_CONFIG("eeprom3", 0x01);

bool initEEPROM()
{
    bool API_INIT = API_KEY.begin(API_KEY.length());
    bool LOCATION_INIT = LOCATION.begin(LOCATION.length());
    bool TIMEZONE_INIT = TIMEZONE.begin(TIMEZONE.length());
    bool SET_CONFIG_INIT = SET_CONFIG.begin(SET_CONFIG.length());

    return API_INIT && LOCATION_INIT && TIMEZONE_INIT && SET_CONFIG_INIT;
}

void configStateSaveEEPROM(bool state)
{
    SET_CONFIG.writeBool(0, state);
    SET_CONFIG.commit();
}

bool configStateReadEEPROM()
{
    bool configSet = false;
    SET_CONFIG.get(0, configSet);

    return configSet;
}

void writeEEPROM(String data, uint8_t dataType)
{
    switch (dataType)
    {
    case API_KEY_TYPE:
        API_KEY.writeString(0, data.c_str());
        API_KEY.commit();
        break;
    case LOCATION_CODE_TYPE:
        LOCATION.writeString(0, data.c_str());
        LOCATION.commit();
        break;
    case TIMEZONE_TYPE:
        TIMEZONE.writeString(0, data.c_str());
        TIMEZONE.commit();
        break;
    default:
        break;
    }
    
}

String readEEPROM(uint8_t dataType)
{
    String aux;
    char dataBuffer[255] = {NULL};

    switch (dataType)
    {
    case API_KEY_TYPE:
        API_KEY.get(0, dataBuffer);
        break;
    case LOCATION_CODE_TYPE:
        LOCATION.get(0, dataBuffer);
        break;
    case TIMEZONE_TYPE:
        TIMEZONE.get(0, dataBuffer);
        break;
    default:
        break;
    }
    aux = dataBuffer + '\0';
    return aux;
}