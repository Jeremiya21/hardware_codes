#include <atmel_start.h>
#include "myfunction.h"
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	function(W,1000);
	return 0;
}
