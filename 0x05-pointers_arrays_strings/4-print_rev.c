#include "holberton.h"
#include <stdio.h>

/**
*print_rev - prints a reversed string
*
*Description:takes a string. reverses. prints
*Return:void
*@s:given string
*/
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
#include "holberton.h"
#include <stdio.h>

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
