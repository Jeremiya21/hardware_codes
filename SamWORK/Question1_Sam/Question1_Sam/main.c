#include <atmel_start.h>
#include <stdbool.h>
#include "LedOnFunction.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	bool R,G,B,W;
	R=true;
	G=false;
	B=false;
	W=false;
	
	LedOnFunction(R,G,B,W);
	
	return 0;
	
}
