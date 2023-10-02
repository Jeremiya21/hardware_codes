/*
 * LedOn.c
 *
 * Created: 02-10-2023 15:19:53
 *  Author: user
 */ 
#include "LedOn.h"
void LedOn(uint8_t red,uint8_t green, uint8_t blue)
{
	TCA0.SINGLE.CMP0=red;
	TCA0.SINGLE.CMP1=green;
	TCA0.SINGLE.CMP2=blue;
}