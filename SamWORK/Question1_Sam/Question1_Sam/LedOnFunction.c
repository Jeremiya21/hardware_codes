/*
 * LedOnFunction.c
 *
 * Created: 9/26/2023 9:39:51 AM
 *  Author: samsunny
 */ 
#include <atmel_start.h>
#include <stdbool.h>

void LedOnFunction(bool R,bool G, bool B, bool W)
{
	R0_MCU_set_level(R);
	G0_MCU_set_level(G);
	B0_MCU_set_level(B);
	W0_MCU_set_level(W);
}