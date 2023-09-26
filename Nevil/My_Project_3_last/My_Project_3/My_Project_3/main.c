#include <atmel_start.h>
#include "toggle_rgb.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		//led_selector(1,1,1,500,500,500);
		leddelay(200,200,200);
	}
}
