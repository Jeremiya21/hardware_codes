/*
 * Green.c
 *
 * Created: 06-10-2023 14:26:55
 *  Author: Anora
 */ 

#include "Green.h"
void Green(uint8_t bright)
{
	
	TCA0.SINGLE.CMP1H=bright;
	
}