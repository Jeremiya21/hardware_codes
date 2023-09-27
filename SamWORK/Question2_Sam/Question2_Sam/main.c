
#include "LedToggle.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	bool R,G,B,W;
	uint16_t uSdelay=100;
	
	R=1;
	G=0;
	B=0;
	W=0;
	
	while (1) 
	{
		LedToggle(R,G,B,W,uSdelay);
	}
	
}
