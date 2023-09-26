#include <atmel_start.h>
#include <stdbool.h>
#include <stdint.h>
#include "functionCall.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	
	uint32_t delay_R,delay_G,delay_B;
	delay_B=100;
	delay_G=150;
	delay_R=200;
	
	/* Replace with your application code */
	functionCall(&delay_R,&delay_G,&delay_B);
}
