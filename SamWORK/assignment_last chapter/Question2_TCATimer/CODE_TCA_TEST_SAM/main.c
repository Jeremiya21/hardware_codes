#include "function_Call.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	/* Replace with your application code */
	
	while (1)
	{	
		function_Call(50,100,150); // turn on LEDs at a particular brightness (r,g,b) : range (0->255)
	}
}
