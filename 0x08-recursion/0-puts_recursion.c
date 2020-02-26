#include <stdio.h>
#include "holberton.h"

/**
*_puts_recursion - prints string followed by new line
*Return: void
*@s: the string to print
*/

void _puts_recursion(char *s)
{
	if (!s[0])
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(&s[1]);
	}
}
