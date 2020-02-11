#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
*times_table- prints the times table of 9
*
*Description:print the table
*Return:nothing
*
*
*/
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
		{
		for (j = 0; j < 10; j++)
			{
			if (j == 0)
			{
				_putchar('0');
			}
			else if (i * j >= 10)
			{
				_putchar('0' + (j * i) / 10);
				_putchar('0' + (j * i) % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + j * i);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			}
		_putchar('\n');
		}
}
