#include <atmel_start.h>
#include "toggle_rgb.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		led_ON(100,0,0);
		//_delay_ms(500);
		led_ON(0,100,0);
		//_delay_ms(500);
		led_ON(0,0,100);
		//_delay_ms(500);
		led_ON(0,100,100);
		//_delay_ms(500);
		led_ON(100,0,100);
		//_delay_ms(500);
		led_ON(100,100,0);
		//_delay_ms(500);
 		led_ON(100,100,100);
		//_delay_ms(500);
// 		
		
	}
}
