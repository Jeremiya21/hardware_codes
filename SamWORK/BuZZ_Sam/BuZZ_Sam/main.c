#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) 
	{
		buzz_Freq(20000);	//minimum value 1226 Hz
	}
	return 0;
}
