#include <atmel_start.h>
#include "function.h"
#include <stdint.h>
int main(void)
{
	/* Initializes MCU, drivers and middle ware */
	atmel_start_init();
	//led_on(R,G,B,W);
	led_on(0,1,1,0);
	return 0;
}
