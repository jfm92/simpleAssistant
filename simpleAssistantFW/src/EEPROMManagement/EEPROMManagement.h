#ifndef EEPROMANAGMENT
#define EEPROMANAGMENT

#define API_KEY_TYPE        0x00
#define LOCATION_CODE_TYPE  0x01
#define TIMEZONE_TYPE       0x02

#include "stdio.h"
#include "stdint.h"
#include "stdbool.h"
#include "string"
#include "EEPROM.h"


bool initEEPROM();
void writeEEPROM(String data, uint8_t dataType);
String readEEPROM(uint8_t dataType);

#endif
