#include "holberton.h"
#include <stdio.h>

/**
*_puts - prints a given string
*
*Description:takes a pointer to a string and prints it
*Return:void
*@str:given string
*/
void _puts(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
		{
		_putchar(*(str + len));
		len++;
		}
	_putchar('\n');
}
