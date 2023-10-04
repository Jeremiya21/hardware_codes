#include <atmel_start.h>
#include "led_cntrl.h"

int main(void)
{

	atmel_start_init();

	uint8_t red=100,green=50,blue=200;
	
	while (1) 
	{
		
		led_cntrl(red,green,blue);
		
	}
}
