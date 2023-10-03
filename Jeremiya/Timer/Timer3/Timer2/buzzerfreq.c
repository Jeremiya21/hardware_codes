/*
 * buzzerfreq.c
 *
 * Created: 10/3/2023 11:39:23 AM
 *  Author: jeremiya
 */ 

#include "buzzerfreq.h"

void buzzerfreq(int f)
{
	uint8_t num;
	num=(1/(0.00000032*f));
	TCB0.CCMPL=num ;
	TCB0.CCMPH= (num)/2 ;
}