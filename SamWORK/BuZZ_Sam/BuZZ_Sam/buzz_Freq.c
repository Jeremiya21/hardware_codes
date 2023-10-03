/*
 * buzz_Freq.c
 *
 * Created: 10/3/2023 2:14:35 PM
 *  Author: samsunny
 */ 


#include "buzz_Freq.h"

#define CLK_FREQ 312500    //.........Hz (hertz)


void buzz_Freq(uint16_t freq)
{
	uint8_t count;
	
	count=CLK_FREQ/freq;
	TCB0.CCMPL=count;
	TCB0.CCMPH=count/2;
}