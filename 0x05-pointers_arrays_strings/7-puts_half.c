#include "holberton.h"
#include <stdio.h>

/**
*puts_half - prints every other char
*
*Description:takes a string arg, prints second half
*Return:void
*@str:given string
*/
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	if (len % 2 == 0)
	{
		for (i = len  / 2; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = len - (len - 1) / 2; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}

/**
*_strlen - gives length of a given string
*
*Description:takes a pointer to a char and returns length
*Return:the length of a string
*@s:given integer variable 1
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		{
		len++;
		}
	return (len);
}
