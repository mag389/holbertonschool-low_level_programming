#include <stdio.h>
#include "holberton.h"

/**
*more_numbers - prints nums
*
*Description:prints nums 0-14 ten times
*return:void
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
			_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
	_putchar('\n');
	}
}
