#include <atmel_start.h>
#include "Led_Combo.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) 
	{
		Led_Combo(10,20,30);	// (R,G,B)
	}
}
