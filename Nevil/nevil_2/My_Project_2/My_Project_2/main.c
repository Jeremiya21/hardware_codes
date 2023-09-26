#include <atmel_start.h>
#include "toggle_led.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		led_ON(0,0,1,1,1000);
	}
}
