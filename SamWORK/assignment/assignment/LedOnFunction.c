/*
 * LedOnFunction.c
 *
 * Created: 23-09-2023 10:14:56
 *  Author: SUNNY
 */ 
#include <stdbool.h>
#include <atmel_start.h>
void LedOnFunction(bool R,bool G,bool B,bool W)
{
	
		R0_MCU_set_level(R);
		G0_MCU_set_level(G);
		B0_MCU_set_level(B);
		W0_MCU_set_level(W);
}