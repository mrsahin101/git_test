#include <stdio.h>
#include "screen.h"
#include <stdint.h>

void my_delay(void);

int main(void)
{
	while(1)
	{
		Screen_ON();
		my_delay();
		Screen_OFF();
		my_delay();
	}
}
void my_delay(void)
{
	uint32_t i = 0;
	for(i = 0; i < 40000000; i++)
	{
	
	}
	return;
}
