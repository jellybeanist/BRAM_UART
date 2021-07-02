#include "main.h"
#include <stdio.h>
#include <sleep.h>

int main (void)
{
	while (1)
	{
		
		if(RX_BUF_EMTY[0] == 0)
			TX_BUF_DATA[0] = RX_BUF_DATA[0];
		
		sleep(1);
	}

	return 0;
}
