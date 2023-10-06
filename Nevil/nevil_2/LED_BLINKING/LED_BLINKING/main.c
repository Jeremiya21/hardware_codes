#include <atmel_start.h>
#include "led_function.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		
		RGB_brightness(128,128,128);
	}
}
