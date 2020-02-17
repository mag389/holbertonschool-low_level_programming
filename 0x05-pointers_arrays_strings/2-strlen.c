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
