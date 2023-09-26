#include <atmel_start.h>
#include "led_ON.h"
#include "func.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	/* Replace with your application code */
	led_on(1);
	while (1) 
	{
		led_ON(1,1,0,1);
	}
}