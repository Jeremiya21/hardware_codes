#include <atmel_start.h>
#include "LedBlink.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	
	atmel_start_init();
	uint8_t value;


	/* Replace with your application code */
	while (1) 
	 {
		 
		 LedBlink(10);
		 
	 }
}
