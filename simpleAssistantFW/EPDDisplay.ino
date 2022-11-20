// EPD Libraries
#include <GxEPD.h>
#include <GxGDEW042T2/GxGDEW042T2.h>
#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>

// Configs & helpers files
#include "configHW.h"
#include "displayLayout.h"
#include "helpers.h"

// Fonts
#include "Fonts/FreeSansBold30pt7b.h"
#include "Fonts/FreeSansBold20pt7b.h"
#include "Fonts/FreeSansBold36pt7b.h"
#include "Fonts/FreeSans11pt7b.h"
#include "Fonts/FreeSansBold9pt7b.h"

GxIO_Class epdIO(SPI, pinCS, pinDC, pinRST);
GxEPD_Class epdDisplay(epdIO, pinRST, pinBusy);

void initEPD()
{
    epdDisplay.init();
    epdDisplay.setRotation(displayRotation);
}