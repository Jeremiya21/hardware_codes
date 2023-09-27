/*
 * ret_LogicLevel.c
 *
 * Created: 9/27/2023 9:54:04 AM
 *  Author: samsunny
 */ 
#include <atmel_start.h>
#include "ret_LogicLevel.h"

bool ret_LogicLevel()
{
	bool a=PA1_get_level();
	return a;
}