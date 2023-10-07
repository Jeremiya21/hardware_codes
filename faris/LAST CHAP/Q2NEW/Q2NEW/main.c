#include <atmel_start.h>
#include "led.h"
int main(void)
{
	uint8_t R=100,G=200,B=222;
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		led_bright(R,G,B);
	}
}

