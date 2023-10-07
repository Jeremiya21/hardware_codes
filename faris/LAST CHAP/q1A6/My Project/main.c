#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	uint16_t duty_cycle;

	/* Replace with your application code */
	while (1) {
		adjust_led(duty_cycle);
	}
}
