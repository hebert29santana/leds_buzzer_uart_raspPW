#include "start_buzzer.h"

const uint buzzer_pin = 21;

void start_buzzer(uint32_t duration_ms) {
    uint32_t period = 1000000 / BUZZER_FREQ_HZ;
    uint32_t half_period = period / 2;
    uint32_t end_time = time_us_32() + (duration_ms * 1000);

    gpio_set_dir(buzzer_pin, GPIO_OUT);

    while (time_us_32() < end_time) {
        gpio_put(buzzer_pin, HIGH);
        sleep_us(half_period);
        gpio_put(buzzer_pin, LOW);
        sleep_us(half_period);
    }

    gpio_put(buzzer_pin, LOW);
}
