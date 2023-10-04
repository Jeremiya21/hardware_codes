/*
 * Led_Combo_Color.c
 *
 * Created: 10/4/2023 12:30:42 PM
 *  Author: samsunny
 */ 
#include "Led_Combo_Color.h"

void Led_Combo_Color(uint8_t red,uint8_t green,uint8_t blue)
{
	TCA0.SINGLE.CMP0=red;
	TCA0.SINGLE.CMP1=green;
	TCA0.SINGLE.CMP2=blue;
	
}