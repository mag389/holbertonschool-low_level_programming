#include "holberton.h"
#include <stdio.h>

/**
*rev_string - reverses string
*
*Description:takes a string. reverses it
*Return:void
*@s:given string
*/
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;
	char temp2[999];

	for (i = len - 1; i >= 0; i--)
	{
		temp2[len - i - 1] = s[i];
	}
	for (i = 0; i < len; i++)
		s[i] = temp2[i];
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
