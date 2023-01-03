#ifndef APIMANAGEMENT
#define APIMANAGEMENT

#include "../../helpers.h"
#include "stdbool.h"

#define AccuWeatherHost "dataservice.accuweather.com"

bool getCurrentWeather(WeatherData_t *WeatherData);

#endif

