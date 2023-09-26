#include "functionCall.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	uint32_t delay_R,delay_G,delay_B;
	delay_B=100;
	delay_G=150;
	delay_R=200;
	bool r,g,b;
	r=0;b=1;g=0;
	while (1) 
	{
		/* Replace with your application code */
		functionCall(r,g,b,&delay_R,&delay_G,&delay_B);
	}
	return 0;
}
