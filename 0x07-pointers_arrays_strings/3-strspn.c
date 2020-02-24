#include <stdio.h>
#include "holberton.h"

/**
*_strspn - gets length of a prefix substring
*Return: number of bytes in the initial segmentr null
*@s:string to search through
*@accept: chars to look for
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != 0)
	{
		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
				{
				i++;
				j = 0;
				break;
				}
			j++;
		}
		if (j != 0)
			return (i);
	}
	return (i);
}
