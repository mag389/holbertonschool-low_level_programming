#include <stdlib.h>
#include <stdio.h>

/**
*main-prints all 2 digit nums
*
*description:prints double digit nums
*Return:0
*
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			{
			putchar('0' + i);
			putchar('0' + j);
			if (i < 9 || j < 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
