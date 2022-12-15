/*
 * light weight random generator lib include
 *
 * Code originated from Lukasz Podkalicki (https://blog.podkalicki.com/attiny13-randomly-flashing-led-with-prng-based-on-lfsr/)
 * Author: Andriy Malyshenklo (andriy@malyshenko.com) 
 *
 * License: GNU GPL v2+
 +
 */

#include <avr/eeprom.h>
#include "light_random.h"

static uint16_t random_number = 0;

static uint16_t lfsr16_next(uint16_t n)
{
  return (n >> 0x01U) ^ (-(n & 0x01U) & 0xB400U);
}

void random_init(uint16_t seed)
{
#ifdef USE_RANDOM_SEED
  random_number = lfsr16_next(eeprom_read_word((uint16_t *)RANDOM_SEED_ADDRESS) ^ seed);
  eeprom_write_word((uint16_t *)0, random_number);
#else
  random_number = seed;
#endif /* !USE_RANDOM_SEED */
}

uint16_t random_get(void)
{

  return (random_number = lfsr16_next(random_number));
}