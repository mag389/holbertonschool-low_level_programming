#include <stdlib.h>
#include <stdio.h>

/**
*main-prints all combos of 2 digit nums
*     no repeats
*description:prints double digit nums
*Return:0
*
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
		putchar('0' + i / 10);
		putchar('0' + i % 10);
		putchar(' ');
		putchar('0' + j / 10);
		putchar('0' + j % 10);
		if (i < 98 || j < 99)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
