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

void epdPrintDate(tm *pTimeInfo)
{
  //TODO: If month name is short, apply an offset
  String sDate = String(pTimeInfo->tm_mday) + 
                String(" ") +
                String(monthName[pTimeInfo->tm_mon]) + 
                String(" ") +
                String(1900 + pTimeInfo->tm_year);

  epdDisplay.setTextColor(GxEPD_WHITE);
  epdDisplay.setFont(&FreeSans11pt7b);
  epdDisplay.fillRect(dateXPos, dateYPos, dateBoxWidth, dateBoxHeight, GxEPD_BLACK);

  //Apply offset if number has only one digit
  (pTimeInfo->tm_mday < 9 ) ?
  epdDisplay.setCursor(dateXPos + dateXOffset , dateYPos + dateYOffset) :
  epdDisplay.setCursor(dateXPos, dateYPos + dateYOffset);

  epdDisplay.print(sDate);

  epdDisplay.updateWindow(dateXPos, dateYPos, dateBoxWidth, dateBoxHeight, true);

}