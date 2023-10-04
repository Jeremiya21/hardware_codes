#include <atmel_start.h>
#include "led_dim.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	uint8_t top;
	while (1) 
	{
		led_dim(top);
	}
}
