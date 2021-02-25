#pragma once

// Data specific to Adafruit 240x240, 1.3inch TFT BONNET, ST7789V, (learn.adafruit.com/adafruit-1-3-color-tft-bonnet-for-raspberry-pi/pinouts)
#ifdef ADAFRUIT_ST7789V_BONNET

#if !defined(GPIO_TFT_DATA_CONTROL)
#define GPIO_TFT_DATA_CONTROL 25
#endif

#if !defined(GPIO_TFT_BACKLIGHT)
#define GPIO_TFT_BACKLIGHT 26
#endif

#if !defined(GPIO_TFT_RESET_PIN)
#define GPIO_TFT_RESET_PIN 24
#endif

#endif
