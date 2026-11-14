// Wooden iPod - step 1: screen test (Arduino-Pico core)
// Starter written with AI help; the rest of the firmware is written by me.
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

#define TFT_CS   13
#define TFT_DC   14
#define TFT_RST  15

Adafruit_ST7789 tft(&SPI1, TFT_CS, TFT_DC, TFT_RST);

void setup() {
  Serial.begin(115200);

  SPI1.setSCK(10);   // screen clock
  SPI1.setTX(11);    // screen data (MOSI)

  tft.init(240, 240);
  tft.setRotation(2);          // try 0, 1, 2 or 3 if the picture is the wrong way up
  tft.fillScreen(ST77XX_BLACK);

  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(3);
  tft.setCursor(10, 40);
  tft.println("Wooden iPod");
  tft.setTextSize(2);
  tft.setCursor(10, 90);
  tft.println("screen works");
}

void loop() {
}
