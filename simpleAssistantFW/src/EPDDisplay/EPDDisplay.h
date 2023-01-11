#ifndef EPDDISPLAY
#define  EPDDISPLAY

// Configs & helpers files
#include "../../configHW.h"
#include "../../helpers.h"
#include "stdio.h"
#include "stdbool.h"
#include "RTClib.h"

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
void printHourEPD(DateTime *dateInfo);
void printDateEPD(DateTime *dateInfo);
void loadingScreenEPD(bool configServer, String IP);
void printWeatherInfoEPD(WeatherData_t *WeatherData);
void cleanEPD();

#endif