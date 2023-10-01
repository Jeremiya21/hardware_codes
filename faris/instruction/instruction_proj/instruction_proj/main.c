#include <atmel_start.h>
#include "turn_led.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	//bool R=true,G=true,B=true,W=true;
	/* Replace with your application code */
	while (1) {
		turn_led(1,1,1,1);
		
	}
}
