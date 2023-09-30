/*
 * My_Function.c
 *
 * Created: 27-09-2023 10:22:23
 *  Author: nevil
 */ 
#include <atmel_start.h>
#include <stdbool.h>
bool log_ic_level(){
	bool c;
	PA_2_set_dir(PORT_DIR_IN);
	PA_2_set_pull_mode(PORT_PULL_UP);
    c = PA_2_get_level();
	return c;
	
}