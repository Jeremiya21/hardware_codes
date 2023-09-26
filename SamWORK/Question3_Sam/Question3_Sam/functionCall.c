/*
 * functionCall.c
 *
 * Created: 9/26/2023 11:09:31 AM
 *  Author: samsunny
 */ 

#include "functionCall.h"

void functionCall(uint32_t *delay_R,uint32_t *delay_B,uint32_t *delay_G)
{
	while(true)
	{
		ToggleRed(delay_R);
		ToggleGreen(delay_G);
		ToggleBlue(delay_B);
	}
}