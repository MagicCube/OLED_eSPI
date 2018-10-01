/*
  This sketch uses the GLCD font only.

  Make sure all the display driver and pin comnenctions are correct by
  editting the User_Setup.h file in the TFT_eSPI library folder.

  #########################################################################
  ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
  #########################################################################
*/
#include "SPI.h"
#include "TFT_eSPI.h"

// Use hardware SPI
TFT_eSPI tft = TFT_eSPI();

void setup() {
  Serial.begin(115200);

  tft.init();
//  tft.invertDisplay(true);
}

void loop(void)
{
  // pseudo-code for cheesy RLE
  // start with color1
  // while more input data remaining
  //  count =  0nnnnnnn = 1 byte or 1nnnnnnn nnnnnnnn 2 bytes (0 - 32767)
  //  repeat color count times
  //  toggle color1/color2
  static const uint8_t up_icon_9x9[] PROGMEM =
  {
    0x04,
    0x01, 0x08,
    0x01, 0x07,
    0x03, 0x06,
    0x03, 0x05,
    0x05, 0x04,
    0x05, 0x03,
    0x07, 0x02,
    0x07, 0x01
  };

  uint16_t r;
  uint16_t color1 = TFT_YELLOW;
  uint16_t color2 = TFT_BLUE;

  for (r = 0; r < 4; r++) {
    tft.setRotation(r);
    uint16_t w = tft.width();
    uint16_t h = tft.height();
    uint16_t n = min(w, h) / 2;
    uint16_t i;
    printf("w: %d, h: %d, n: %d\n", w, h, n);

    tft.fillScreen(TFT_BLACK);
    for (i = 0; i < n; i += 5)
    {
      tft.fillRect(i, i, w - i - i, h - i - i, color1);
      tft.drawRect(i, i, w - i - i, h - i - i, color2);
      color1 = (color1 << 15) | (color1 >> 1);
      color2 = (color2 << 15) | (color2 >> 1);
    }

    tft.drawEllipse(w / 2, h / 2, (w / 2) - 1, (h / 2) - 1, TFT_WHITE);
    tft.drawEllipse(w / 2, h / 2, (w / 2) - 2, (h / 2) - 2, TFT_BLACK);
    tft.drawEllipse(w / 2, h / 2, (w / 2) - 3, (h / 2) - 3, TFT_WHITE);
    tft.drawEllipse(w / 2, h / 2, (w / 2) - 4, (h / 2) - 4, TFT_BLACK);
    tft.drawEllipse(w / 2, h / 2, (w / 2) - 5, (h / 2) - 5, TFT_WHITE);

    tft.drawTriangle(w / 2, 0, 0, h, w, h, TFT_RED);

    tft.fillRect(n - 32, n - 20, 54, 3 + tft.fontHeight(), TFT_BLACK);
    tft.setTextFont(1);
    tft.setCursor(n - 30, n - 18);
    tft.setTextColor(TFT_WHITE);
    tft.print(F("Rotate:"));
    tft.print(r);

    tft.setAddrWindow(n + 24, n - 20, n + 32, n - 12);
    for (int i = 6; i < 0x10; i++)
    {
      uint16_t cnt = 0;
      uint16_t color = tft.color565((i << 4) | i, (i << 4) | i, (i << 4) | i);
      uint16_t curcolor = 0;
  
      const uint8_t *cmp = &up_icon_9x9[0];
  
      while (cmp < &up_icon_9x9[sizeof(up_icon_9x9)])
      {
        cnt = pgm_read_byte(cmp++);
        if (cnt & 0x80)
          cnt = ((cnt & 0x7f) << 8) | pgm_read_byte(cmp++);
  
        tft.pushColor(curcolor, cnt); // PDQ_GFX has count
  
        curcolor ^= color;
      }
      delay(100);
    }

    delay(1000);
  }
}
