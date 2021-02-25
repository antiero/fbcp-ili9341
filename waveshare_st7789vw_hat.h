#pragma once

// Data specific to WaveShare 240x240, 1.3inch IPS LCD ST7789VW hat, https://www.waveshare.com/w/upload/a/ae/ST7789_Datasheet.pdf
// NOTE: MODIFIED FOR THE  Adafruit 1.3" TFT BONNET (ST7789V 240x240)
#ifdef WAVESHARE_ST7789VW_HAT

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
