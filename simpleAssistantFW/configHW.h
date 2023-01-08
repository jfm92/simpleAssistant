// Hardware configuration
#define pinCS   15
#define pinDC   27
#define pinRST  26
#define pinBusy 25
#define pinWakeUp 33

// Display related config
#define displayVertical 1
#define displayHorizontal 0
#define displayRotation displayHorizontal

// EEPROM config
#define EEPROM_TOTAL_SIZE 0x28 //40Bytes
#define API_KEY_SIZE 0x20
#define LOCATION_CODE_SIZE 0x07

// DeepSleep config
#define SLEEP_PERIOD_SEG 60U
