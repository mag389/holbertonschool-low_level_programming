#include <stdio.h>
#include "holberton.h"

/**
*_print_rev_recursion - prints string in reverse
*Return: void
*@s: the string to print
*/

void _print_rev_recursion(char *s)
{
	if (s[0])
		_print_rev_recursion(&s[1]);
		_putchar(s[0]);
}
