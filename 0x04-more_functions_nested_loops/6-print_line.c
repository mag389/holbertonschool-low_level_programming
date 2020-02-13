#include <stdio.h>
#include "holberton.h"

/**
*print_line - prints line
*
*Description:prints line of length n
*return:void
*@n:length of line
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
