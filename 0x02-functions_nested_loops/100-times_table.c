#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
*print_times_table- prints the times table of n
*
*Description:print the table of n
*Return:void
*
*@n what number to go up to
*/
void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
		{
		for (j = 0; j <= n; j++)
		{
			if (i * j >= 100)
			{
				_putchar('0' + (j * i) / 100);
				_putchar('0' + (j * i) / 10 % 10);
				_putchar('0' + (j * i) % 10);
			}
			else if (i * j >= 10)
			{
				_putchar(' ');
				_putchar('0' + (j * i) / 10);
				_putchar('0' + (j * i) % 10);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + j * i);
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		}
	}
}
