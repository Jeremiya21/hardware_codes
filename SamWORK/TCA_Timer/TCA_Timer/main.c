#include <atmel_start.h>
#include "LedOn.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		LedOn(100,100,100);	
	}
}
