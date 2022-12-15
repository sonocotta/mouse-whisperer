#pragma once

#include <light_ws2812.h>

class LedEffect
{
public:
    LedEffect(uint8_t _count, cRGB * _leds) : count(_count), leds(_leds) {};
    virtual void loop();
protected:
    uint8_t count = 0;
    cRGB *leds;
};