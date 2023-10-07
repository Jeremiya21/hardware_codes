#include <atmel_start.h>
#include "buzzer.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	uint16_t input_freq=2000;
	/* Replace with your application code */
	while (1) {
		buzzer(input_freq);
	}
}
