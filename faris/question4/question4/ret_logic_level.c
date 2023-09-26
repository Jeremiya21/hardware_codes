/*
 * ret_logic_level.c
 *
 * Created: 26-09-2023 14:45:51
 *  Author: faris
 */ 
#include <stdbool.h>
#include <atmel_start.h>
bool ret_logic_level(){
	PIN1_J13_set_dir(PORT_DIR_IN);
	//int b=*PIN1_J13_set_dir;
	PIN1_J13_set_pull_mode(PORT_PULL_OFF);
	//int c=*PIN1_J13_set_pull_mode;
	//PIN1_J13_set_level(true);
	//PIN1_J13_set_level(false);
	bool a= PIN1_J13_get_level();
	//int d=*PIN1_J13_get_level;
	return a;
}