// EPD Libraries
#include <GxEPD.h>
#include <GxGDEW042T2/GxGDEW042T2.h>
#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>

// Fonts
#include "../../Fonts/FreeSansBold30pt7b.h"
#include "../../Fonts/FreeSansBold20pt7b.h"
#include "../../Fonts/FreeSansBold36pt7b.h"
#include "../../Fonts/FreeSans11pt7b.h"
#include "../../Fonts/FreeSansBold9pt7b.h"

// Icons & display image layout
#include "../../Icons/weatherIcons.h"
#include "displayLayout.h"

#include "EPDDisplay.h"

GxIO_Class epdIO(SPI, pinCS, pinDC, pinRST);
GxEPD_Class epdDisplay(epdIO, pinRST, pinBusy);

void initEPD()
{
    epdDisplay.init();
    epdDisplay.setRotation(displayRotation);
}

void printHourEPD(DateTime *dateInfo)
{
  // Give format to hour
  String sHour = (dateInfo->hour() < 10) ?
                  (String("0") + String(dateInfo->hour())) :
                  String(dateInfo->hour());
  sHour += String(":");
  sHour += (dateInfo->minute() < 10) ? 
            (String("0") + String(dateInfo->minute())) :
            String(dateInfo->minute());

  epdDisplay.setTextColor(GxEPD_BLACK);
  epdDisplay.setFont(&FreeSansBold36pt7b);
  epdDisplay.fillRect(hourXPos, hourYPos, hourBoxWidth, hourBoxHeight, GxEPD_WHITE);
  epdDisplay.setCursor(hourXPos, hourYPos + hourYOffset);

  epdDisplay.print(sHour);

  epdDisplay.updateWindow(hourXPos, hourYPos, hourBoxWidth, hourBoxHeight, true);           
}

void printDateEPD(DateTime *dateInfo)
{
    //TODO: If month name is short, apply an offset
    String sDate = String(dateInfo->day()) + 
                String(" ") +
                String(monthName[dateInfo->month()]) + 
                String(" ") +
                String(dateInfo->year());

    epdDisplay.setTextColor(GxEPD_WHITE);
    epdDisplay.setFont(&FreeSans11pt7b);
    epdDisplay.fillRect(dateXPos, dateYPos, dateBoxWidth, dateBoxHeight, GxEPD_BLACK);

    //Apply offset if number has only one digit
    (dateInfo->day() < 9 ) ?
    epdDisplay.setCursor(dateXPos + dateXOffset , dateYPos + dateYOffset) :
    epdDisplay.setCursor(dateXPos, dateYPos + dateYOffset);

    epdDisplay.print(sDate);

    epdDisplay.updateWindow(dateXPos, dateYPos, dateBoxWidth, dateBoxHeight, true);

}

void loadingScreenEPD(bool configServer, String IP)
{
    epdDisplay.fillScreen(GxEPD_WHITE);
    epdDisplay.update();

    epdDisplay.setTextColor(GxEPD_BLACK);
    epdDisplay.setFont(&FreeSans11pt7b);
    epdDisplay.fillRect(hourXPos, hourYPos, hourBoxWidth, hourBoxHeight, GxEPD_WHITE);
    epdDisplay.setCursor(hourXPos, hourYPos + hourYOffset);

    epdDisplay.print(IP);

    epdDisplay.updateWindow(hourXPos, hourYPos, hourBoxWidth, hourBoxHeight, true);
}

void getWeatherIcon(unsigned char *ucBuffer, uint8_t weatherCode)
{
    // This array assign an icon from our library to the Accuweather API icon code
    // Due to the API has 44 different icons, we reuse some icons images to reduce 
    // memory ussage.
    // https://developer.accuweather.com/weather-icons
    uint8_t iconPos[44] = {0, // Number 0 not use
                        sunIcon, sunIcon, sunCloudIcon, sunIcon, // 1 - 4
                        sunFogIcon, sunCloudIcon, cloudyIcon, cloudyIcon, // 5 - 8
                        0, 0, // 9, 10 not use on AW API
                        fogIcon, //11
                        rainIcon, rainSunIcon, rainSunIcon, rainStormIcon, // 12 - 15
                        rainStormSunIcon, rainStormSunIcon, rainStormIcon, // 16 - 18
                        snowIcon, snowIcon, snowIcon,  snowIcon, // 19 - 23
                        snowIcon, snowIcon, snowIcon, // 24 - 25
                        0, 0, 
                        rainIcon, // 29
                        sunIcon, sunIcon, windyIcon, moonIcon, //30 - 33
                        moonIcon, moonIcon, moonCloudIcon, moonCloudIcon, moonCloudIcon, //34 - 38
                        rainIcon, rainIcon, rainStormIcon, rainStormIcon, //39 - 42
                        snowIcon, snowIcon}; // 43 - 44

    //All weather icons are on the same array, so we need to calculate the offset of each icon.
    uint16_t offset = iconSize * iconPos[weatherCode];

    memcpy(ucBuffer, &weatherIcons[offset], iconSize);
}

void printWeatherInfoEPD(WeatherData_t *WeatherData)
{
    // Create weather info
    String sTemp = String((int)round(WeatherData->fTemperature)) + String("C");
    String sHum = String("HR: ") + String((int)round(WeatherData->uiRelativeHumidity)) + String(" %");
    String sWind = String((uint16_t)WeatherData->fWindSpeed) + String(" Km/H ") + String(WeatherData->pcWindDirection);

    //Print weather icon
    unsigned char iconBuffer[iconSize] = {0};
    getWeatherIcon(iconBuffer, WeatherData->weatherIcon);
    epdDisplay.drawBitmap(iconBuffer, weatherIconXOffset, weatherIconYOffset, 42,42, GxEPD_WHITE);

    // Temperature
    epdDisplay.setCursor(weatherTempXOffset, weatherTempYOffset);
    epdDisplay.setTextColor(GxEPD_BLACK);
    //TODO: Change font size to smaller one
    epdDisplay.setFont(&FreeSansBold20pt7b);
    epdDisplay.print(sTemp);

    epdDisplay.drawFastHLine(weatherXPos,weatherLineYOffset,120,GxEPD_BLACK);

    //Extra information -> Humidity and wind info
    epdDisplay.setCursor(weatherHumidityXOffset, weatherHumidityYOffset);
    epdDisplay.setFont(&FreeSansBold9pt7b);
    epdDisplay.print(sHum);
    epdDisplay.setCursor(weatherWindXOffset, weatherWindYOffset);
    epdDisplay.print(sWind);

    //TODO: Fix this not hardcode it
    epdDisplay.updateWindow(weatherXPos, weatherXPos, 150, 150, true);
}

void cleanEPD()
{
    epdDisplay.update();
    epdDisplay.fillScreen(GxEPD_WHITE);
}