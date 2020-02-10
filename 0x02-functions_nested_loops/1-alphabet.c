#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
*main-prints alphabet using only _putchar
*
*description:prints alphabet
*Return:0
*
*/
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
