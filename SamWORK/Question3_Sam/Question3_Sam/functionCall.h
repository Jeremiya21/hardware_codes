/*
 * functionCall.h
 *
 * Created: 9/26/2023 11:17:05 AM
 *  Author: samsunny
 */ 


#ifndef FUNCTIONCALL_H_
#define FUNCTIONCALL_H_



#include <atmel_start.h>
#define __DELAY_BACKWARD_COMPATIBLE__

#include <stdbool.h>
#include <stdint.h>
#include <util/delay.h>

void functionCall(uint16_t delay_R,uint16_t delay_B,uint16_t delay_G);



#endif /* FUNCTIONCALL_H_ */