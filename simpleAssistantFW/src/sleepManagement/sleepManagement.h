//#ifndef WAKEUPMANAGEMENT
//#define WAKEUPMANAGEMENT

#include "stdint.h"

#define WAKE_UP_TIMER 0X01
#define WAKE_UP_BTN 0x02

void configSleep(uint64_t sleepTimeSec);
void initSleep();
uint8_t wakeUpCause();

//#endif