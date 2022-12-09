//Things that can be use on several parts of the code and simplify the usage of it
#pragma once

struct weatherStruct{
    long lEpoch;
    uint8_t weatherIcon;
    float fTemperature;
    uint8_t uiRelativeHumidity;
    const char* pcWindDirection;
    float fWindSpeed;
    float fAtmPressure;
};
