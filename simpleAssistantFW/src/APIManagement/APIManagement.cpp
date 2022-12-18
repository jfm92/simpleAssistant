#include <WiFiClientSecure.h>
#include <ArduinoJson.h>

#include "../EEPROMManagement/EEPROMManagement.h"
#include "APIManagement.h"

WiFiClientSecure httpClient;

String buildACAPIReq(String apiKey, String locationCode)
{
    String aux = "GET /currentconditions/v1/" + locationCode + "?apikey=" + apiKey + "&details=true HTTP/1.1 \r\n";
    aux += "Accept: */*\r\n";
    aux += "Accept-Language: es-ES\r\n";
    aux += "Host: " AccuWeatherHost "\r\n";
    aux += "User-Agent: ESP8266/0.1\r\n";
    aux += "\r\n";

    return aux;
}

bool getCurrentWeather(weatherStruct *WeatherData)
{
  bool getDataRequest = true;

  httpClient.setInsecure();

  if(!httpClient.connect(AccuWeatherHost, 443)) //443 for https connection
  {
    Serial.print("Error connecting to:");
    Serial.println(AccuWeatherHost);
    getDataRequest = false;
    return getDataRequest;
  }

  yield(); //Give some time for the connection

  // Build API request
  String apiKEY = readEEPROM(API_KEY_TYPE);
  String acLocation = readEEPROM(LOCATION_CODE_TYPE);
  const char * apiRequest = buildACAPIReq(apiKEY, acLocation).c_str();

  // Send HTTP request
  httpClient.print(apiRequest);

  // Check client request
  if(httpClient.println() == 0)
  {
    Serial.println("Failed to send request");
    getDataRequest = false;
    return getDataRequest;
  }

  // Check HTTPS status
  char reqStatus[32] = {0};
  httpClient.readBytesUntil('\r', reqStatus, sizeof(reqStatus));
  if(strcmp(reqStatus, "HTTP/1.1 200 OK") != 0)
  {
    Serial.println(reqStatus);
    Serial.println("HTTP response error.");
    getDataRequest = false;
    return getDataRequest;
  }

  //Skip http headers
  char endOfHeaders[] = "\r\n\r\n";
  if(!httpClient.find(endOfHeaders))
  {
    Serial.println("Invalid HTTP server.");
    getDataRequest = false;
    return getDataRequest;
  }

  while(httpClient.available() && httpClient.peek() != '{')
  {
    char c = 0;
    httpClient.readBytes(&c, 1);
  }

  // Deseralize of incoming JSON message.
  DynamicJsonDocument doc(8192); //8192 is base on JSON response
  DeserializationError serializationError = deserializeJson(doc, httpClient);

  if(serializationError)
  {
    Serial.println("Deserialization error.");
    Serial.println(serializationError.c_str());
    getDataRequest = false;
    return getDataRequest;
  }

  // Save request data
  WeatherData->lEpoch = doc["EpochTime"];
  WeatherData->weatherIcon = doc["WeatherIcon"];
  WeatherData->fTemperature = doc["Temperature"]["Metric"]["Value"];
  WeatherData->uiRelativeHumidity = doc["RelativeHumidity"];
  WeatherData->pcWindDirection = doc["Wind"]["Direction"]["Localized"];
  WeatherData->fWindSpeed = doc["Wind"]["Speed"]["Metric"]["Value"];
  WeatherData->fAtmPressure = doc["Pressure"]["Metric"]["Value"];

  return getDataRequest;
}