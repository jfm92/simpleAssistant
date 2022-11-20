#include "helpers.h"

void setup()
{
    Serial.begin(115200);
    initEPD();
    loadingScreenEPD(true, "192.168.1.1");
    //weatherStruct weatherData;
}

void loop()
{
    
}