#include <stdio.h>
#include "holberton.h"

/**
*print_numbers - prints nums
*
*Description:prints nums 0-9
*return:void
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		{
		_putchar('0' + i);
		}
	_putchar('\n');
}
