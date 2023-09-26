/*
 * functionCall.h
 *
 * Created: 9/26/2023 11:17:05 AM
 *  Author: samsunny
 */ 


#ifndef FUNCTIONCALL_H_
#define FUNCTIONCALL_H_



#include <atmel_start.h>
#include <stdbool.h>
#include <stdint.h>
#include <util/delay.h>

void functionCall(bool r,bool g,bool b,uint32_t *delay_R,uint32_t *delay_B,uint32_t *delay_G);
void ToggleBlue(uint32_t *delay_B);
void ToggleGreen(uint32_t *delay_G);
void ToggleRed(bool r);


#endif /* FUNCTIONCALL_H_ */