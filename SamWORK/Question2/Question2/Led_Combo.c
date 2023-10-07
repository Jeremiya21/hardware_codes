/*
 * Led_Combo.c
 *
 * Created: 10/7/2023 9:53:54 AM
 *  Author: samsunny
 */ 

#include "Led_Combo.h"

void Led_Combo(uint8_t red,uint8_t green,uint8_t blue)
{
	TCA0.SPLIT.HCMP0=red;
	TCB0.CCMPL=255;
	TCB1.CCMPL=255;
	TCB0.CCMPH=green;
	TCB1.CCMPH=blue;		
}