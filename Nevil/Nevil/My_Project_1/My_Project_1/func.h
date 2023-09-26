/*
 * func.h
 *
 * Created: 21-09-2023 11:29:15
 *  Author: nevil
 */ 
#define __DELAY_BACKWARD_COMPATIBLE__

#include <util/delay.h>
#include "atmel_start.h"
//#include <stdint-gcc.h>

#ifndef FUNC_H_
#define FUNC_H_

void led_on(uint16_t delay_val);

#endif /* FUNC_H_ */