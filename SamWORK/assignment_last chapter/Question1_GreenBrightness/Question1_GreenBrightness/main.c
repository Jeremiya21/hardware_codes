#include "LedBrightness.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) 
	{
		LedBrightness(50);
	}
	return 0;
}
