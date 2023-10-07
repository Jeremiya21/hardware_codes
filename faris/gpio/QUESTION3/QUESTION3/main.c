#include <atmel_start.h>
#include "toggle.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	int delay1=100,delay2=200,delay3=300;
	
	/* Replace with your application code */
	while (1) {
//		delaytoggling(delay1,delay2,delay3);
		toggle(delay1,delay2,delay3);
	}
}
