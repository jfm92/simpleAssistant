#include <pgmspace.h>

// Position on the big array to calculate offset
#define cloudyIcon 0U
#define fogIcon 1U
#define moonIcon 2U
#define moonCloudIcon 3U
#define rainIcon 4U
#define rainStormSunIcon 5U
#define rainSunIcon 6U
#define snowIcon 7U
#define sunCloudIcon 8U
#define sunIcon 9U
#define sunFogIcon 10U
#define windyIcon 11U
#define rainStormIcon 12U

// Size on bytes of each icon with a dimension of 42 x 42 px
#define iconSize 252U

const unsigned char weatherIcons [] PROGMEM = {
	// 'cloudy, 42x42px 0
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xc0, 0xff, 0xc0, 0x03, 0xff, 
	0xff, 0xc0, 0xff, 0x83, 0xc1, 0xff, 0xff, 0xc0, 0xff, 0x0f, 0xf0, 0xe7, 0xff, 0xc0, 0xff, 0x1f, 
	0xf8, 0x00, 0xff, 0xc0, 0xfe, 0x3f, 0xfc, 0x00, 0x3f, 0xc0, 0xfe, 0x7f, 0xfe, 0x3e, 0x3f, 0xc0, 
	0xfe, 0x7f, 0xfe, 0x7f, 0x1f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 0x9f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 
	0x8f, 0xc0, 0xf0, 0x7f, 0xff, 0xff, 0x83, 0xc0, 0xc0, 0x7f, 0xff, 0xff, 0x80, 0xc0, 0xc7, 0xff, 
	0xff, 0xff, 0xf8, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x9f, 0xff, 0xff, 0xff, 0xfe, 0x00, 
	0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 
	0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x9f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x8f, 0xff, 
	0xff, 0xff, 0xfc, 0x40, 0xc3, 0xff, 0xff, 0xff, 0xf0, 0xc0, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xc0, 
	0xf0, 0x00, 0x00, 0x00, 0x03, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	// 'fog, 42x42px 256 1
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xc0, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xc0, 0xff, 0x87, 
	0xe1, 0xff, 0xff, 0xc0, 0xff, 0x0f, 0xf0, 0xe3, 0xff, 0xc0, 0xff, 0x1f, 0xfc, 0x00, 0x7f, 0xc0, 
	0xfe, 0x3f, 0xfc, 0x00, 0x3f, 0xc0, 0xfe, 0x7f, 0xfe, 0x3e, 0x1f, 0xc0, 0xfc, 0x7f, 0xfe, 0x7f, 
	0x1f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 0x9f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 0x8f, 0xc0, 0xf0, 0x7f, 
	0xff, 0xff, 0x83, 0xc0, 0xc0, 0x7f, 0xff, 0xff, 0xc0, 0xc0, 0x87, 0xff, 0xff, 0xff, 0xf8, 0x40, 
	0x8f, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 
	0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 
	0xff, 0xff, 0xfe, 0x00, 0x9f, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xfc, 0x40, 
	0xc3, 0xff, 0xff, 0xff, 0xf0, 0xc0, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xc0, 0xf8, 0x00, 0x00, 0x00, 
	0x03, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xfc, 0x00, 0x1f, 0xc0, 0xf8, 0x7f, 0xc0, 0x00, 0x07, 0xc0, 
	0xf8, 0x00, 0x00, 0xff, 0x07, 0xc0, 0xfe, 0x00, 0x07, 0xff, 0xff, 0xc0, 0xff, 0xf1, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xff, 0xfc, 0x00, 0x1f, 0xc0, 0xf8, 0x7f, 0xc0, 0x00, 0x07, 0xc0, 0xf8, 0x00, 
	0x00, 0xff, 0x87, 0xc0, 0xfe, 0x00, 0x0f, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	// 'moon, 42x42px 512 2
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xf8, 0x1f, 0xe3, 0xff, 0xc0, 0xff, 0xc0, 0x1f, 0xe3, 0xff, 0xc0, 0xff, 0x81, 
	0x3f, 0xe3, 0xff, 0xc0, 0xfe, 0x0e, 0x3f, 0xc1, 0xff, 0xc0, 0xfc, 0x3e, 0x3e, 0x00, 0x3f, 0xc0, 
	0xf8, 0x7e, 0x3c, 0x08, 0x1f, 0xc0, 0xf1, 0xfe, 0x7c, 0x08, 0x1f, 0xc0, 0xe3, 0xfe, 0x7f, 0x81, 
	0xff, 0xc0, 0xe3, 0xfe, 0x7f, 0xc3, 0xff, 0xc0, 0xc7, 0xfe, 0x7f, 0xe3, 0xff, 0xc0, 0xcf, 0xfe, 
	0x7f, 0xe3, 0xff, 0xc0, 0x8f, 0xfe, 0x3f, 0xe7, 0xff, 0xc0, 0x9f, 0xfe, 0x3f, 0xff, 0xf9, 0xc0, 
	0x9f, 0xff, 0x3f, 0xff, 0xf9, 0xc0, 0x1f, 0xff, 0x3f, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0x1f, 0xff, 
	0xe0, 0x00, 0x1f, 0xff, 0x8f, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0x8f, 0xff, 0xf8, 0xc0, 0x1f, 0xff, 
	0xc7, 0xff, 0xf9, 0xc0, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xc0, 0x1f, 0xff, 0xf1, 0xff, 0xff, 0xc0, 
	0x1f, 0xff, 0xf8, 0xff, 0xff, 0xc0, 0x9f, 0xff, 0xfc, 0x3f, 0xff, 0xc0, 0x9f, 0xff, 0xfe, 0x07, 
	0xff, 0xc0, 0x8f, 0xff, 0xff, 0x80, 0x0f, 0xc0, 0xcf, 0xff, 0xff, 0xe0, 0x1f, 0xc0, 0xc7, 0xff, 
	0xff, 0xfe, 0x1f, 0xc0, 0xe3, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 0xe3, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 
	0xf1, 0xff, 0xff, 0xfc, 0x7f, 0xc0, 0xf8, 0xff, 0xff, 0xf8, 0xff, 0xc0, 0xfc, 0x3f, 0xff, 0xe1, 
	0xff, 0xc0, 0xfe, 0x0f, 0xff, 0x83, 0xff, 0xc0, 0xff, 0x03, 0xfe, 0x07, 0xff, 0xc0, 0xff, 0xc0, 
	0x00, 0x1f, 0xff, 0xc0, 0xff, 0xf0, 0x00, 0x7f, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	// 'moon_clouds, 42x42px 768 3
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xc0, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xc0, 
	0xff, 0xff, 0xff, 0xc0, 0x7f, 0xc0, 0xff, 0xff, 0xff, 0x84, 0xff, 0xc0, 0xff, 0xff, 0xff, 0x1c, 
	0xff, 0xc0, 0xff, 0xff, 0xfe, 0x3c, 0xff, 0xc0, 0xff, 0xff, 0xfe, 0x3c, 0xff, 0xc0, 0xff, 0xff, 
	0xfe, 0x7c, 0xff, 0xc0, 0xff, 0xff, 0xfc, 0x7c, 0x7f, 0xc0, 0xff, 0xff, 0xfc, 0x7e, 0x3f, 0xc0, 
	0xff, 0xe0, 0xfc, 0x7e, 0x3f, 0xc0, 0xff, 0x80, 0x3c, 0x7f, 0x0f, 0xc0, 0xff, 0x00, 0x0c, 0x7f, 
	0x80, 0x00, 0xfe, 0x3f, 0x80, 0x1f, 0xc0, 0x40, 0xfc, 0x7f, 0xc0, 0x0f, 0xf8, 0x40, 0xfc, 0xff, 
	0xe3, 0x87, 0xf8, 0x40, 0xf8, 0xff, 0xef, 0xc7, 0xf0, 0xc0, 0xf8, 0xff, 0xff, 0xe1, 0x81, 0xc0, 
	0xe1, 0xff, 0xff, 0xe0, 0x07, 0xc0, 0xc1, 0xff, 0xff, 0xe0, 0x1f, 0xc0, 0x8f, 0xff, 0xff, 0xfc, 
	0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x1f, 0xff, 
	0xff, 0xff, 0x1f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 
	0x8f, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0xc0, 0x00, 0x00, 0x00, 
	0xff, 0xc0, 0xf0, 0x00, 0x00, 0x03, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	// 'rain, 42x42px 1024 4
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xc0, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xc0, 0xff, 0x83, 
	0xe1, 0xff, 0xff, 0xc0, 0xff, 0x0f, 0xf0, 0xe3, 0xff, 0xc0, 0xff, 0x1f, 0xfc, 0x00, 0xff, 0xc0, 
	0xfe, 0x3f, 0xfc, 0x00, 0x3f, 0xc0, 0xfe, 0x7f, 0xfe, 0x3e, 0x3f, 0xc0, 0xfe, 0x7f, 0xfe, 0x7f, 
	0x1f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 0x9f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 0x8f, 0xc0, 0xf0, 0x7f, 
	0xff, 0xff, 0x83, 0xc0, 0xc0, 0x7f, 0xff, 0xff, 0x80, 0xc0, 0x87, 0xff, 0xff, 0xff, 0xf8, 0x40, 
	0x8f, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 
	0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 
	0xff, 0xff, 0xfe, 0x00, 0x9f, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xfc, 0x40, 
	0xc3, 0xff, 0xff, 0xff, 0xf0, 0xc0, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xc0, 0xf0, 0x00, 0x00, 0x00, 
	0x03, 0xc0, 0xff, 0x8f, 0x1f, 0x1e, 0x3f, 0xc0, 0xff, 0x8f, 0x1f, 0x3e, 0x3f, 0xc0, 0xff, 0x9f, 
	0x3e, 0x3e, 0x7f, 0xc0, 0xff, 0x1f, 0x3e, 0x3e, 0x7f, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xf3, 0xe7, 0xef, 0xff, 0xc0, 0xff, 0xf3, 0xe3, 0xc7, 
	0xff, 0xc0, 0xff, 0xe3, 0xc7, 0xc7, 0xff, 0xc0, 0xff, 0xe7, 0xc7, 0xcf, 0xff, 0xc0, 0xff, 0xc7, 
	0xcf, 0x8f, 0xff, 0xc0, 0xff, 0xc7, 0xcf, 0x9f, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	// 'rain_storm_sun, 42x42px 1280 5
	0xff, 0xff, 0xff, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xe3, 
	0xff, 0xc0, 0xff, 0xff, 0xef, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xc7, 0xe3, 0xf3, 0xc0, 0xff, 0xff, 
	0xe3, 0xff, 0xe3, 0xc0, 0xff, 0xff, 0xf1, 0xff, 0xc7, 0xc0, 0xff, 0xff, 0xf3, 0xf7, 0xcf, 0xc0, 
	0xff, 0xff, 0xff, 0x80, 0xff, 0xc0, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xc0, 0xff, 0xe0, 0x7e, 0x3c, 
	0x3f, 0xc0, 0xff, 0x80, 0x3e, 0x7e, 0x3f, 0xc0, 0xff, 0x06, 0x0c, 0x7f, 0x3c, 0x00, 0xfe, 0x3f, 
	0x80, 0x1f, 0x18, 0x00, 0xfc, 0x7f, 0xc0, 0x0f, 0x38, 0x00, 0xfc, 0xff, 0xe3, 0x87, 0x3f, 0xc0, 
	0xf8, 0xff, 0xff, 0xc6, 0x3f, 0xc0, 0xf8, 0xff, 0xff, 0xe0, 0x7f, 0xc0, 0xe1, 0xff, 0xff, 0xe0, 
	0xff, 0xc0, 0xc1, 0xff, 0xff, 0xe0, 0x7f, 0xc0, 0x8f, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 0x1f, 0xff, 
	0xff, 0xfe, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x1f, 0xc0, 
	0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 0x8f, 0xff, 0xff, 0xfc, 
	0x3f, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xc0, 0xf8, 0x00, 
	0x00, 0x03, 0xff, 0xc0, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xc0, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xc0, 
	0xff, 0xff, 0xf0, 0xff, 0xff, 0xc0, 0xfe, 0xfc, 0xe0, 0xff, 0xff, 0xc0, 0xfe, 0x7c, 0xf8, 0x3f, 
	0xff, 0xc0, 0xfc, 0x7c, 0xfe, 0x0f, 0xff, 0xc0, 0xfc, 0xf8, 0xff, 0x1f, 0xff, 0xc0, 0xf8, 0xf9, 
	0xfc, 0x3f, 0xff, 0xc0, 0xf8, 0xf1, 0xfc, 0x7f, 0xff, 0xc0, 0xf9, 0xf1, 0xf0, 0xff, 0xff, 0xc0, 
	0xf1, 0xf3, 0xf9, 0xff, 0xff, 0xc0, 0xfb, 0xf3, 0xff, 0xff, 0xff, 0xc0, 
	// 'rain_sun, 42x42px 1536 6
	0xff, 0xff, 0xff, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xe3, 
	0xff, 0xc0, 0xff, 0xff, 0xef, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xc7, 0xe3, 0xf3, 0xc0, 0xff, 0xff, 
	0xe3, 0xff, 0xe3, 0xc0, 0xff, 0xff, 0xf1, 0xff, 0xc7, 0xc0, 0xff, 0xff, 0xf3, 0xf7, 0xcf, 0xc0, 
	0xff, 0xff, 0xff, 0x80, 0xff, 0xc0, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xc0, 0xff, 0xe0, 0x7e, 0x3c, 
	0x3f, 0xc0, 0xff, 0x80, 0x3e, 0x7e, 0x3f, 0xc0, 0xff, 0x06, 0x0c, 0x7f, 0x3c, 0x00, 0xfe, 0x3f, 
	0x80, 0x1f, 0x18, 0x00, 0xfc, 0x7f, 0xc0, 0x0f, 0x38, 0x00, 0xfc, 0xff, 0xe3, 0x87, 0x3f, 0xc0, 
	0xf8, 0xff, 0xff, 0xc6, 0x3f, 0xc0, 0xf8, 0xff, 0xff, 0xe0, 0x7f, 0xc0, 0xe1, 0xff, 0xff, 0xe0, 
	0xff, 0xc0, 0xc1, 0xff, 0xff, 0xe0, 0x7f, 0xc0, 0x8f, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 0x1f, 0xff, 
	0xff, 0xfe, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x1f, 0xc0, 
	0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 0x8f, 0xff, 0xff, 0xfc, 
	0x3f, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xc0, 0xf8, 0x00, 
	0x00, 0x03, 0xff, 0xc0, 0xfe, 0x7c, 0x78, 0xff, 0xff, 0xc0, 0xfc, 0x7c, 0xf8, 0xff, 0xff, 0xc0, 
	0xfc, 0xf8, 0xf9, 0xff, 0xff, 0xc0, 0xfe, 0xff, 0xfd, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0x8f, 0x9f, 0xff, 0xff, 0xc0, 0xff, 0x8f, 
	0x1f, 0xff, 0xff, 0xc0, 0xff, 0x9f, 0x1f, 0xff, 0xff, 0xc0, 0xff, 0x1f, 0x3f, 0xff, 0xff, 0xc0, 
	0xff, 0x3e, 0x3f, 0xff, 0xff, 0xc0, 0xff, 0xbf, 0x3f, 0xff, 0xff, 0xc0, 
	// 'snow, 42x42px 1792 7
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xc0, 0xff, 0xf0, 0x07, 0xff, 
	0xff, 0xc0, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xc0, 0xff, 0x87, 0xe1, 0xff, 0xff, 0xc0, 0xff, 0x1f, 
	0xf8, 0xc1, 0xff, 0xc0, 0xfe, 0x3f, 0xfc, 0x00, 0x7f, 0xc0, 0xfe, 0x3f, 0xfc, 0x08, 0x3f, 0xc0, 
	0xfe, 0x7f, 0xfe, 0x7e, 0x1f, 0xc0, 0xfc, 0x7f, 0xfe, 0xff, 0x1f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 
	0x8f, 0xc0, 0xf8, 0x7f, 0xff, 0xff, 0x87, 0xc0, 0xe0, 0x7f, 0xff, 0xff, 0x81, 0xc0, 0xc0, 0x7f, 
	0xff, 0xff, 0xc0, 0xc0, 0x87, 0xff, 0xff, 0xff, 0xf8, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xfc, 0x40, 
	0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 
	0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x9f, 0xff, 
	0xff, 0xff, 0xfe, 0x40, 0x87, 0xff, 0xff, 0xff, 0xf8, 0x40, 0xc1, 0xff, 0xff, 0xff, 0xe0, 0xc0, 
	0xe0, 0x00, 0x00, 0x00, 0x01, 0xc0, 0xf8, 0x00, 0x00, 0x00, 0x07, 0xc0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xc0, 0xff, 0xff, 
	0xff, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xff, 0x22, 0xff, 0xc0, 0xff, 0xf1, 0xff, 0x00, 0x7f, 0xc0, 
	0xff, 0xf1, 0xff, 0x80, 0xff, 0xc0, 0xff, 0x80, 0x3f, 0x81, 0xff, 0xc0, 0xff, 0x80, 0x3f, 0x00, 
	0x7f, 0xc0, 0xff, 0xe0, 0x7f, 0x00, 0x7f, 0xc0, 0xff, 0xc0, 0x7f, 0x62, 0xff, 0xc0, 0xff, 0x80, 
	0x3f, 0xe3, 0xff, 0xc0, 0xff, 0x91, 0x3f, 0xff, 0xff, 0xc0, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xf9, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	// 'sun_cloud, 42x42px 2048 8
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xe7, 0xe3, 
	0xf3, 0xc0, 0xff, 0xff, 0xc3, 0xff, 0xe3, 0xc0, 0xff, 0xff, 0xe1, 0xff, 0xc7, 0xc0, 0xff, 0xff, 
	0xf3, 0xff, 0xcf, 0xc0, 0xff, 0xff, 0xff, 0x80, 0xff, 0xc0, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xc0, 
	0xff, 0xe0, 0xfe, 0x1c, 0x3f, 0xc0, 0xff, 0x80, 0x3e, 0x3e, 0x3f, 0xc0, 0xff, 0x04, 0x0c, 0x7f, 
	0x3c, 0x00, 0xfe, 0x3f, 0x80, 0x1f, 0x18, 0x00, 0xfc, 0x7f, 0xc0, 0x0f, 0x18, 0x00, 0xfc, 0xff, 
	0xe3, 0x87, 0x3f, 0xc0, 0xf8, 0xff, 0xef, 0xc6, 0x3f, 0xc0, 0xf8, 0xff, 0xff, 0xe0, 0x7f, 0xc0, 
	0xe1, 0xff, 0xff, 0xe0, 0xff, 0xc0, 0xc1, 0xff, 0xff, 0xe0, 0x7f, 0xc0, 0x8f, 0xff, 0xff, 0xfc, 
	0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x1f, 0xff, 
	0xff, 0xff, 0x1f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 
	0x8f, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0xe0, 0x00, 0x00, 0x00, 
	0xff, 0xc0, 0xf8, 0x00, 0x00, 0x03, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	// 'sun, 42x42px 2304 9
	0xff, 0xff, 0xf3, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xf3, 0xff, 
	0xff, 0xc0, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xc0, 0xff, 0xff, 
	0xf3, 0xff, 0xff, 0xc0, 0xfc, 0xff, 0xf3, 0xff, 0xcf, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 0x8f, 0xc0, 
	0xfe, 0x3f, 0xff, 0xff, 0x1f, 0xc0, 0xff, 0x1f, 0xff, 0xfe, 0x3f, 0xc0, 0xff, 0x8f, 0xc0, 0x7c, 
	0x7f, 0xc0, 0xff, 0xde, 0x00, 0x1e, 0xff, 0xc0, 0xff, 0xfc, 0x0c, 0x0f, 0xff, 0xc0, 0xff, 0xf8, 
	0x7f, 0x87, 0xff, 0xc0, 0xff, 0xf1, 0xff, 0xe3, 0xff, 0xc0, 0xff, 0xe3, 0xff, 0xf1, 0xff, 0xc0, 
	0xff, 0xe3, 0xff, 0xf1, 0xff, 0xc0, 0xff, 0xe7, 0xff, 0xf9, 0xff, 0xc0, 0xff, 0xc7, 0xff, 0xf8, 
	0xff, 0xc0, 0xff, 0xc7, 0xff, 0xfc, 0xff, 0xc0, 0x01, 0xcf, 0xff, 0xfc, 0xe0, 0x00, 0x01, 0xcf, 
	0xff, 0xfc, 0xe0, 0x00, 0xff, 0xc7, 0xff, 0xfc, 0xff, 0xc0, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xc0, 
	0xff, 0xc7, 0xff, 0xf8, 0xff, 0xc0, 0xff, 0xe3, 0xff, 0xf1, 0xff, 0xc0, 0xff, 0xe3, 0xff, 0xf1, 
	0xff, 0xc0, 0xff, 0xf1, 0xff, 0xe3, 0xff, 0xc0, 0xff, 0xf8, 0x7f, 0x87, 0xff, 0xc0, 0xff, 0xfc, 
	0x1e, 0x0f, 0xff, 0xc0, 0xff, 0xde, 0x00, 0x1e, 0xff, 0xc0, 0xff, 0x8f, 0xc0, 0x7c, 0x7f, 0xc0, 
	0xff, 0x1f, 0xff, 0xfe, 0x3f, 0xc0, 0xfe, 0x3f, 0xff, 0xff, 0x1f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 
	0x8f, 0xc0, 0xfc, 0xff, 0xf3, 0xff, 0xcf, 0xc0, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xc0, 0xff, 0xff, 
	0xf3, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xf3, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xc0, 
	// 'sun_fog, 42x42px 2560 10
	0xff, 0xff, 0xff, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xe3, 
	0xff, 0xc0, 0xff, 0xff, 0xef, 0xe3, 0xff, 0xc0, 0xff, 0xff, 0xc7, 0xe3, 0xf3, 0xc0, 0xff, 0xff, 
	0xe3, 0xff, 0xe3, 0xc0, 0xff, 0xff, 0xf1, 0xff, 0xc7, 0xc0, 0xff, 0xff, 0xf3, 0xf7, 0xcf, 0xc0, 
	0xff, 0xff, 0xff, 0x80, 0xff, 0xc0, 0xff, 0xff, 0xff, 0x00, 0x7f, 0xc0, 0xff, 0xe0, 0x7e, 0x3c, 
	0x3f, 0xc0, 0xff, 0x80, 0x3e, 0x7e, 0x3f, 0xc0, 0xff, 0x06, 0x0c, 0x7f, 0x3c, 0x00, 0xfe, 0x3f, 
	0x80, 0x1f, 0x18, 0x00, 0xfc, 0x7f, 0xc0, 0x0f, 0x38, 0x00, 0xfc, 0xff, 0xe3, 0x87, 0x3f, 0xc0, 
	0xf8, 0xff, 0xff, 0xc6, 0x3f, 0xc0, 0xf8, 0xff, 0xff, 0xe0, 0x7f, 0xc0, 0xe1, 0xff, 0xff, 0xe0, 
	0xff, 0xc0, 0xc1, 0xff, 0xff, 0xe0, 0x7f, 0xc0, 0x8f, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 0x1f, 0xff, 
	0xff, 0xfe, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0x1f, 0xc0, 
	0x1f, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x1f, 0xff, 0xff, 0xfe, 0x3f, 0xc0, 0x8f, 0xff, 0xff, 0xfc, 
	0x3f, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xc0, 0xf8, 0x00, 
	0x00, 0x03, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xf0, 0x1f, 0xff, 0xc0, 0xff, 0xff, 0x00, 0x01, 0xff, 0xc0, 0x81, 0xe0, 0x00, 0x01, 
	0xff, 0xc0, 0x80, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0xe0, 0x03, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 
	0xe0, 0x0f, 0xff, 0xc0, 0xff, 0xff, 0x00, 0x01, 0xff, 0xc0, 0x80, 0x00, 0x01, 0x01, 0xff, 0xc0, 
	0x80, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0xf0, 0x07, 0xff, 0xff, 0xff, 0xc0, 
	// 'windy, 42x42px 2816 11
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xc0, 0xff, 0xf0, 0x07, 0xff, 
	0xff, 0xc0, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xc0, 0xff, 0x87, 0xe1, 0xff, 0xff, 0xc0, 0xff, 0x1f, 
	0xf8, 0xc1, 0xff, 0xc0, 0xfe, 0x3f, 0xfc, 0x00, 0x7f, 0xc0, 0xfe, 0x3f, 0xfc, 0x08, 0x3f, 0xc0, 
	0xfe, 0x7f, 0xfe, 0x7e, 0x1f, 0xc0, 0xfc, 0x7f, 0xfe, 0xff, 0x1f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 
	0x8f, 0xc0, 0xf8, 0x7f, 0xff, 0xff, 0x87, 0xc0, 0xe0, 0x7f, 0xff, 0xff, 0x81, 0xc0, 0xc0, 0x7f, 
	0xff, 0xff, 0xc0, 0xc0, 0x87, 0xff, 0xff, 0x8f, 0xf8, 0x40, 0x8f, 0xff, 0xff, 0x87, 0xfc, 0x40, 
	0x1f, 0xff, 0xff, 0xe3, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xe3, 0xfe, 0x00, 0x1f, 0xf8, 0x00, 0x07, 
	0xfe, 0x00, 0x1f, 0xf0, 0x00, 0x07, 0xfe, 0x00, 0x1f, 0xf0, 0x00, 0x0f, 0xfe, 0x00, 0x9f, 0xff, 
	0xff, 0xff, 0xfe, 0x40, 0x87, 0xff, 0xff, 0xff, 0xf8, 0x40, 0xc1, 0xff, 0xff, 0xff, 0xe0, 0xc0, 
	0xe0, 0x00, 0x00, 0x00, 0x01, 0xc0, 0xf8, 0x00, 0x00, 0x00, 0x07, 0xc0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0x00, 0x00, 0x00, 0xff, 0xc0, 0xfe, 0x00, 
	0x00, 0x00, 0x7f, 0xc0, 0xfe, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xc0, 
	0xff, 0xff, 0xff, 0xff, 0x1f, 0xc0, 0xff, 0xc0, 0x00, 0x7c, 0x3f, 0xc0, 0xff, 0xc0, 0x00, 0x3c, 
	0x3f, 0xc0, 0xff, 0xc0, 0x00, 0x1c, 0xff, 0xc0, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xc0, 0xff, 0xff, 
	0xff, 0x1f, 0xff, 0xc0, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xc0, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xc0, 
	0xff, 0xff, 0xfc, 0x7f, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	// 'rain_storm, 42x42px 3072 12
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xc0, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xc0, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xc0, 0xff, 0x83, 
	0xe1, 0xff, 0xff, 0xc0, 0xff, 0x0f, 0xf0, 0xe3, 0xff, 0xc0, 0xff, 0x1f, 0xfc, 0x00, 0xff, 0xc0, 
	0xfe, 0x3f, 0xfc, 0x00, 0x3f, 0xc0, 0xfe, 0x7f, 0xfe, 0x3e, 0x3f, 0xc0, 0xfe, 0x7f, 0xfe, 0x7f, 
	0x1f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 0x9f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 0x8f, 0xc0, 0xf0, 0x7f, 
	0xff, 0xff, 0x83, 0xc0, 0xc0, 0x7f, 0xff, 0xff, 0x80, 0xc0, 0x87, 0xff, 0xff, 0xff, 0xf8, 0x40, 
	0x8f, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 
	0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x1f, 0xff, 
	0xff, 0xff, 0xfe, 0x00, 0x9f, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xfc, 0x40, 
	0xc3, 0xff, 0xff, 0xff, 0xf0, 0xc0, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xc0, 0xf0, 0x00, 0x00, 0x00, 
	0x03, 0xc0, 0xfe, 0x3c, 0x78, 0xfc, 0x3f, 0xc0, 0xfe, 0x7c, 0xf8, 0xf8, 0x7f, 0xc0, 0xfc, 0x78, 
	0xf8, 0xf0, 0xff, 0xc0, 0xfc, 0xf8, 0xf9, 0xe1, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xf8, 0x3f, 0xc0, 0xfb, 0xf3, 0xe7, 0xfe, 0x1f, 0xc0, 0xf1, 0xf3, 0xe3, 0xfc, 
	0x3f, 0xc0, 0xf3, 0xe3, 0xe7, 0xf8, 0x7f, 0xc0, 0xe3, 0xe7, 0xc7, 0xf8, 0xff, 0xc0, 0xe3, 0xc7, 
	0xcf, 0xf1, 0xff, 0xc0, 0xe7, 0xc7, 0xcf, 0xfb, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0
};