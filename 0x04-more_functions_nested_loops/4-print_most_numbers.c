#include <stdio.h>
#include "holberton.h"

/**
*print_most_numbers - prints nums
*
*Description:prints nums 0-9 without 2,4
*return:void
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
		_putchar('0' + i);
		}
	}
	_putchar('\n');
}
