/*
 * function.c
 *
 * Created: 9/20/2023 2:04:57 PM
 *  Author: jeremiya
 */ 
#include <atmel_start.h>
#include <stdint.h>
#include <stdbool.h>
#include "function.h"
void led_on(bool R,bool G,bool B,bool W)
{
		R_MCU_set_level(R);
		G_MCU_set_level(G);
		B_MCU_set_level(B);
		W_MCU_set_level(W);
}