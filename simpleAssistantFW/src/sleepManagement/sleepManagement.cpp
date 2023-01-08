#include "sleepManagement.h"
#include "driver/rtc_io.h"
#include "../../configHW.h"
#include "esp_sleep.h"

void configSleep(uint64_t sleepTimeSec)
{
    // Config wakeUp button
    rtc_gpio_pulldown_en((gpio_num_t)pinWakeUp);
    esp_sleep_enable_ext0_wakeup((gpio_num_t)pinWakeUp,1);
    // Config periodic wakeUp timer
    esp_sleep_enable_timer_wakeup(sleepTimeSec * 1000000);
}

void initSleep()
{
    esp_deep_sleep_start();
}

uint8_t wakeUpCause()
{
    uint8_t wuCause = 0x00;

    esp_sleep_wakeup_cause_t wakeupReason;
    wakeupReason = esp_sleep_get_wakeup_cause();

    wuCause = (wuCause == ESP_SLEEP_WAKEUP_TIMER) ? WAKE_UP_TIMER : wuCause;
    wuCause = (wuCause == ESP_SLEEP_WAKEUP_EXT0) ? WAKE_UP_BTN : wuCause;

    return wuCause;
}