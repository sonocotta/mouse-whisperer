#include <DigiMouse.h>

#include "circle.h"
const int RADIUS_FACTOR = 3;

#ifdef LIGHT_WS2812_AVR
#include <light_ws2812.h>
#define BRT_FACTOR 3
#define MAX_BRT ((0xFF >> BRT_FACTOR)-1)

cRGB RGB_COLOR_GREEN = {MAX_BRT, 0, 0};
cRGB RGB_COLOR_WHITE = {MAX_BRT, MAX_BRT, MAX_BRT};
cRGB RGB_COLOR_BLACK = {0, 0, 0};
cRGB RGB_COLOR_BLUE = {0, 0, MAX_BRT};
cRGB RGB_COLOR_RED = {0, MAX_BRT, 0};
cRGB leds[NUM_PIXELS];

#include "effects/rainbowled.h"
RainBowLed effect(BRT_FACTOR, NUM_PIXELS, leds);
#endif

void setup()
{
#ifdef PIN_BTN_1
  pinMode(PIN_BTN_1, INPUT);
#endif

  DigiMouse.begin();
}

#ifndef PIN_BTN_STICKY
uint8_t btn_1_state = HIGH;
#endif

uint8_t enabled_state = true;
uint32_t seq = 0;

void update_visual()
{
  #ifdef LIGHT_WS2812_AVR
  if (enabled_state)
  {
    // uint8_t brightness = (abs(SIN(seq)) * MAX_BRT) >> 10;
    // for (uint8_t i = 0; i < NUM_PIXELS; i++)
    // {
    //   leds[i] = (seq % NUM_PIXELS) == i ? (cRGB) {brightness, 0, 0} : RGB_COLOR_BLACK;
    // }
    ws2812_setleds(leds, NUM_PIXELS);
    effect.loop();
  }
  else
  {
    for (uint8_t i = 0; i < NUM_PIXELS; i++)
    {
      leds[i] = (seq % NUM_PIXELS) == i ? (cRGB) {0, MAX_BRT >> 1, 0} : RGB_COLOR_BLACK;
    }
    ws2812_setleds(leds, NUM_PIXELS);
  }
  #endif
  
}

int16_t x0 = 0;
int16_t y0 = 0;

void loop()
{
#ifdef PIN_BTN_1
  uint8_t btn_state = digitalRead(PIN_BTN_1);
  #ifdef PIN_BTN_STICKY
    enabled_state = btn_state;
  #else
  if (btn_state != btn_1_state)
  {
    if (btn_1_state == LOW)
    {
      enabled_state = !enabled_state;
    }
    btn_1_state = btn_state;
  }
  #endif
#endif

  if (enabled_state)
  {
    seq++;

    int16_t x = COS(seq) >> RADIUS_FACTOR;
    int16_t y = SIN(seq) >> RADIUS_FACTOR;

    if ((x != x0) || (y != y0))
    {
      // DigiMouse.setButtons(MOUSEBTN_LEFT_MASK);
      // DigiMouse.delay(100);

      if (x != x0)
        DigiMouse.moveX(x0 - x);

      if (y != y0)
        DigiMouse.moveY(y0 - y);
      
      // DigiMouse.setButtons(0);
      DigiMouse.delay(10);

      // DigiMouse.rightClick();
      // DigiMouse.delay(100);

      x0 = x;
      y0 = y;
    }
  }

  update_visual();
}