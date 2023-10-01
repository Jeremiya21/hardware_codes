/*
 * statusfn.c
 *
 * Created: 10/1/2023 10:00:34 AM
 *  Author: jeremiya
 */ 
#include "statusfn.h"

bool statusfn()
{
	
	//J13_set_pull_mode(PORT_PULL_OFF);
	bool a = J13_get_level();
	return a;
}