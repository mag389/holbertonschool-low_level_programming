#include "holberton.h"
#include <stdio.h>

/**
*puts2 - prints every other char
*
*Description:takes a string arg, prints alternate chars
*Return:void
*@str:given string
*/
void puts2(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
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
