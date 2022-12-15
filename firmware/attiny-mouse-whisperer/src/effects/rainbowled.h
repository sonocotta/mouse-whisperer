#pragma once

#include "effect.h"
#include <light_ws2812.h>

#define STEP_WAIT_TIME 15

class RainBowLed : public LedEffect
{
public:
    RainBowLed(uint8_t brightness_factor, uint8_t count, cRGB * leds) 
        : brightness_factor{brightness_factor}, LedEffect(count, leds) {}
    void loop();
private:
    void wheel(uint8_t, uint8_t);
    uint8_t brightness_factor; // 0 -> 256, 1 -> 128, 2 -> 64, etc
    uint32_t seq = 0;
};