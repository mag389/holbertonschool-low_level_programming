#include <stdio.h>
#include "holberton.h"

/**
*_strchr - locates character in string
*Return: pointer to first occurence of c in s or null
*@s:string to search through
*@c: char to look for
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			{
			return (&s[i]);
			}
		i++;
	}
	if (c == 0)
		return (&s[i]);
	return (0);
}
