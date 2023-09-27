
#include "LedOnFunction.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	bool R,G,B,W;
	R=1;
	G=0;
	B=0;
	W=0;
	
	LedOnFunction(R,G,B,W);
	
	return 0;
	
}
