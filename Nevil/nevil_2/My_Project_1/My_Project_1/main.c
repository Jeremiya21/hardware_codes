#include <atmel_start.h>
#include "led_ON.h"
int main(void)
{
	
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	//W0_MCU_set_level(false);
	/* Replace with your application code */
	while (1) {
		led_ON(0,1,1,1);
		
	}
	
}