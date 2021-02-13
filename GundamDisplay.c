#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/regs/rosc.h"

uint32_t rnd_whitened(void)
{
    uint32_t random = 0;
    uint32_t random_bit;
    volatile uint32_t *rnd_reg = (uint32_t *)(ROSC_BASE + ROSC_RANDOMBIT_OFFSET);
    for (int k = 0; k < 32; k++)
    {
        while (1)
        {
            random_bit = (*rnd_reg) & 1;
            if (random_bit != ((*rnd_reg) & 1))
                break;
        }
        random = (random << 1) | random_bit;
    }
    return random;
}

int main()
{
    const uint LED_PIN0 = 0;
    const uint LED_PIN1 = 1;
    const uint LED_PIN2 = 2;
    const uint LED_PIN3 = 3;
    const uint LED_PIN4 = 4;
    const uint LED_PIN5 = 5;
    const uint LED_PIN6 = 6;
    const uint LED_PIN7 = 7;
    const uint LED_PIN8 = 8;
    const uint LED_PIN9 = 9;
    const uint LED_PIN10 = 10;
    const uint LED_PIN11 = 11;
    const uint LED_PIN12 = 12;
    const uint LED_PIN13 = 13;
    const uint LED_PIN14 = 14;
    const uint LED_PIN15 = 15;
    const uint LED_PIN16 = 16;
    const uint LED_PIN17 = 17;
    const uint LED_PIN18 = 18;
    const uint LED_PIN19 = 19;
    const uint LED_PIN20 = 20;
    const uint LED_PIN21 = 21;
    const uint LED_PIN22 = 22;
    const uint LED_PIN23 = 23;
    const uint LED_PIN24 = 24;
    const uint LED_PIN26 = 26;
    const uint LED_PIN27 = 27;
    const uint LED_PIN28 = 28;

    gpio_init(LED_PIN0);
    gpio_init(LED_PIN1);
    gpio_init(LED_PIN2);
    gpio_init(LED_PIN3);
    gpio_init(LED_PIN4);
    gpio_init(LED_PIN5);
    gpio_init(LED_PIN6);
    gpio_init(LED_PIN7);
    gpio_init(LED_PIN8);
    gpio_init(LED_PIN9);
    gpio_init(LED_PIN10);
    gpio_init(LED_PIN11);
    gpio_init(LED_PIN12);
    gpio_init(LED_PIN13);
    gpio_init(LED_PIN14);
    gpio_init(LED_PIN15);
    gpio_init(LED_PIN16);
    gpio_init(LED_PIN17);
    gpio_init(LED_PIN18);
    gpio_init(LED_PIN19);
    gpio_init(LED_PIN20);
    gpio_init(LED_PIN21);
    gpio_init(LED_PIN22);
    gpio_init(LED_PIN23);
    gpio_init(LED_PIN24);
    gpio_init(LED_PIN26);
    gpio_init(LED_PIN27);
    gpio_init(LED_PIN28);

    gpio_set_dir(LED_PIN0, GPIO_OUT);
    gpio_set_dir(LED_PIN1, GPIO_OUT);
    gpio_set_dir(LED_PIN2, GPIO_OUT);
    gpio_set_dir(LED_PIN3, GPIO_OUT);
    gpio_set_dir(LED_PIN4, GPIO_OUT);
    gpio_set_dir(LED_PIN5, GPIO_OUT);
    gpio_set_dir(LED_PIN6, GPIO_OUT);
    gpio_set_dir(LED_PIN7, GPIO_OUT);
    gpio_set_dir(LED_PIN8, GPIO_OUT);
    gpio_set_dir(LED_PIN9, GPIO_OUT);
    gpio_set_dir(LED_PIN10, GPIO_OUT);
    gpio_set_dir(LED_PIN11, GPIO_OUT);
    gpio_set_dir(LED_PIN12, GPIO_OUT);
    gpio_set_dir(LED_PIN13, GPIO_OUT);
    gpio_set_dir(LED_PIN14, GPIO_OUT);
    gpio_set_dir(LED_PIN15, GPIO_OUT);
    gpio_set_dir(LED_PIN16, GPIO_OUT);
    gpio_set_dir(LED_PIN17, GPIO_OUT);
    gpio_set_dir(LED_PIN18, GPIO_OUT);
    gpio_set_dir(LED_PIN19, GPIO_OUT);
    gpio_set_dir(LED_PIN20, GPIO_OUT);
    gpio_set_dir(LED_PIN21, GPIO_OUT);
    gpio_set_dir(LED_PIN22, GPIO_OUT);
    gpio_set_dir(LED_PIN23, GPIO_OUT);
    gpio_set_dir(LED_PIN24, GPIO_OUT);
    gpio_set_dir(LED_PIN26, GPIO_OUT);
    gpio_set_dir(LED_PIN27, GPIO_OUT);
    gpio_set_dir(LED_PIN28, GPIO_OUT);

    while (1)
    {
        gpio_put(LED_PIN0, rnd_whitened() % 2);
        gpio_put(LED_PIN1, rnd_whitened() % 2);
        gpio_put(LED_PIN2, rnd_whitened() % 2);
        gpio_put(LED_PIN3, rnd_whitened() % 2);
        gpio_put(LED_PIN4, rnd_whitened() % 2);
        gpio_put(LED_PIN5, rnd_whitened() % 2);
        gpio_put(LED_PIN6, rnd_whitened() % 2);
        gpio_put(LED_PIN7, rnd_whitened() % 2);
        gpio_put(LED_PIN8, rnd_whitened() % 2);
        gpio_put(LED_PIN9, rnd_whitened() % 2);
        gpio_put(LED_PIN10, rnd_whitened() % 2);
        gpio_put(LED_PIN11, rnd_whitened() % 2);
        gpio_put(LED_PIN12, rnd_whitened() % 2);
        gpio_put(LED_PIN13, rnd_whitened() % 2);
        gpio_put(LED_PIN14, rnd_whitened() % 2);
        gpio_put(LED_PIN15, rnd_whitened() % 2);
        gpio_put(LED_PIN16, rnd_whitened() % 2);
        gpio_put(LED_PIN17, rnd_whitened() % 2);
        gpio_put(LED_PIN18, rnd_whitened() % 2);
        gpio_put(LED_PIN19, rnd_whitened() % 2);
        gpio_put(LED_PIN20, rnd_whitened() % 2);
        gpio_put(LED_PIN21, rnd_whitened() % 2);
        gpio_put(LED_PIN22, rnd_whitened() % 2);
        gpio_put(LED_PIN23, rnd_whitened() % 2);
        gpio_put(LED_PIN24, rnd_whitened() % 2);
        gpio_put(LED_PIN26, rnd_whitened() % 2);
        gpio_put(LED_PIN27, rnd_whitened() % 2);
        gpio_put(LED_PIN28, rnd_whitened() % 2);

        sleep_ms(250);
    }
}
