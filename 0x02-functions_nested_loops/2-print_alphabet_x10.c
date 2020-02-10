#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
*print_alphabet_x10-prints alphabet using only _putchar
*
*Description:prints 10x alphabet
*Return:void
*
*/
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
/*	print_alphabet(); how i did before*/
	}
}
