/*
 * LedToggle.c
 *
 * Created: 9/26/2023 9:59:06 AM
 *  Author: samsunny
 */ 
#include "LedToggle.h"
void LedToggle(bool R,bool G,bool B,bool W,uint16_t mSdelay)
{
	R0_MCU_set_level(R);
	G0_MCU_set_level(G);
	B0_MCU_set_level(B);
	W0_MCU_set_level(W);
	
	_delay_us(mSdelay);
	
	R0_MCU_set_level(false);
	G0_MCU_set_level(false);
	B0_MCU_set_level(false);
	W0_MCU_set_level(false);
	
	_delay_us(mSdelay);
	
}