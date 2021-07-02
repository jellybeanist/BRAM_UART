#include "main.h"
#include <stdio.h>
#include <sleep.h>

int main (void)
{
	CLK_DIV_BAUD[0] = 100000000/115200;
	sleep(1);
	while (1)
	{

		if(RX_BUF_EMTY[0] == 0)
			TX_BUF_DATA[0] = RX_BUF_DATA[0];



	}

	return 0;
}
