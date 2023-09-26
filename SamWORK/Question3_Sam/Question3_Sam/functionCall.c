/*
 * functionCall.c
 *
 * Created: 9/26/2023 11:09:31 AM
 *  Author: samsunny
 */ 

#include "functionCall.h"
#include <stdlib.h>

void functionCall(bool r,bool g,bool b,uint32_t *delay_R,uint32_t *delay_B,uint32_t *delay_G)
{
	int count_R=0,count_G=0,count_B=0;
	if(r)
	{
		R0_MCU_toggle_level();
		count_R++;
	}
	if(g)
	{
		G0_MCU_toggle_level();
		count_G++;
	}
	if(b)
	{
		B0_MCU_toggle_level();
		count_B++;
	}
	if(count_R>0)
	{
		_delay_ms(*delay_R);
		R0_MCU_toggle_level();
	}
	if(count_G>0)
	{
		
		*delay_G=abs((*delay_R * count_R) - *delay_G);
		_delay_ms(*delay_G);
		G0_MCU_toggle_level();
	}
	if(count_B>0)
	{
		if(count_R>0 || count_G>0)
		{
			*delay_B=abs( ((*delay_R * count_R) + (*delay_G * count_G))- *delay_B);
		}
		_delay_ms(*delay_B);
		G0_MCU_toggle_level();
	}
	
}