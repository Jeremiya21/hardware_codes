#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) 
	{
		int frequency=1400; //should be between 1300 and 200000
		buzzerfreq(frequency);
	}
}
