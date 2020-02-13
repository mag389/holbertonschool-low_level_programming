#include <stdio.h>
#include "holberton.h"

/**
*print_square - prints square
*
*Description:prints square of size square
*return:void
*@size: size of square
*/
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
