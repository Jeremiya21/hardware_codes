
#include "LedToggle.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	bool R,G,B,W;
	uint16_t uSdelay=500;
	
	R=true;
	G=false;
	B=false;
	W=false;
	
	while (1) {
		LedToggle(R,G,B,W,uSdelay);
	}
	
}
