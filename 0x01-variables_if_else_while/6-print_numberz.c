#include <stdlib.h>
#include <stdio.h>

/**
*main-prints all 1 digit nums
*
*description:prints single digit nums
*Return:0
*
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
