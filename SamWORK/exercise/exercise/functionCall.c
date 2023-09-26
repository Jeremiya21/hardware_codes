/*
 * functionCall.c
 *
 * Created: 23-09-2023 20:20:14
 *  Author: SUNNY
 */ 
#include <atmel_start.h>
#include <stdbool.h>
#include <stdint.h>
#include "colorSelect.h"

void functionCall(uint32_t *delay_R,uint32_t *delay_B,uint32_t *delay_G)
{
	while(true)
	{
	ToggleRed(delay_R);
	ToggleGreen(delay_G);
	ToggleBlue(delay_B);
	}
}