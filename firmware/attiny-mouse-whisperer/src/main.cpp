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

  DigiMouse.begin();
}

void loop()
{

}