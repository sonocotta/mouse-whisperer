#include <DigiMouse.h>

#include "circle.h"
const int RADIUS_FACTOR = 3;

#ifdef LIGHT_WS2812_AVR
#include <light_ws2812.h>
#endif

void setup()
{
  delay(1000);
  Serial.begin(115200);
  Serial.printf("Started");

  // DigiMouse.begin();
}

ISR(PORTB_PORT_vect) {

}

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

void loop()
{

}