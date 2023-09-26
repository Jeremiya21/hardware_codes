#include <atmel_start.h>
#include <stdbool.h>
#include <stdint.h>
#include "toggle_Led.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	
	bool R,G,B,W;
	uint32_t uSdelay=1;
	
	R=true;
	B=false;
	G=false;
	W=false;
	
		toggle_Led(R,G,B,W,uSdelay);
	
}
