/*
 * light weight random generator lib include
 *
 * Code originated from Lukasz Podkalicki (https://blog.podkalicki.com/attiny13-randomly-flashing-led-with-prng-based-on-lfsr/)
 * Author: Andriy Malyshenklo (andriy@malyshenko.com) 
 *
 * License: GNU GPL v2+
 +
 */

#ifndef LIGHT_RANDOM_H_
#define LIGHT_RANDOM_H_

#include <stdint.h>

#ifdef USE_RANDOM_SEED
#define RANDOM_SEED_ADDRESS 0x00
#endif

void random_init(uint16_t seed);
uint16_t random_get(void);

#endif