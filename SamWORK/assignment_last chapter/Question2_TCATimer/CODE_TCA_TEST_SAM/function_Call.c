/*
 * function_Call.c
 *
 * Created: 10/3/2023 11:41:46 AM
 *  Author: samsunny
 */ 

#include "function_Call.h"
void function_Call(uint8_t red,uint8_t green, uint8_t blue)
{
	TCA0.SINGLE.CMP0BUF=red;
	TCA0.SINGLE.CMP1BUF=green;
	TCA0.SINGLE.CMP2BUF=blue;
}