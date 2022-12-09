#ifndef EPDDISPLAY
#define  EPDDISPLAY

// Configs & helpers files
#include "../../configHW.h"
#include "../../helpers.h"
#include "stdio.h"
#include "stdbool.h"

const String monthName[12]  = {"January" , 
                                "February", 
                                "March", 
                                "April", 
                                "May", 
                                "June", 
                                "July", 
                                "August", 
                                "September",
                                "October", 
                                "November", 
                                "December"};

void initEPD();
void printHourEPD(tm *pTimeInfo);
void printDateEPD(tm *pTimeInfo);
void loadingScreenEPD(bool configServer, String IP);
void printWeatherInfoEPD(weatherStruct *WeatherData);

#endif