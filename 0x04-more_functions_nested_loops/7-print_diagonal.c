#include <stdio.h>
#include "holberton.h"

/**
*print_diagonal - prints diagonal line
*
*Description:prints diagonal line of length n
*return:void
*@n:num times to print line
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
