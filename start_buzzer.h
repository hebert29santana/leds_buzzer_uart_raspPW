#ifndef START_BUZZER_H
#define START_BUZZER_H

#include "pico/stdlib.h"

#define HIGH 1
#define LOW 0

#define BUZZER_FREQ_HZ 3200

extern const uint buzzer_pin;

void start_buzzer(uint32_t duration_ms);

#endif
