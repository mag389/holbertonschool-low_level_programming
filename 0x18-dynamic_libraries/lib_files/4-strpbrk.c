#include <stdio.h>
#include "holberton.h"

/**
*_strpbrk -searches a string for any set of bytes
*Return: pointer to the first occurence of a byte or null
*@s:string to look through
*@accept: chars to look for
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int sindex = 0;
	unsigned int aindex = 0;

	while (s[sindex] != 0)
	{
		while (accept[aindex] != 0)
		{
			if (s[sindex] == accept[aindex])
				{
				return (s + sindex);
				}
			aindex++;
		}
		aindex = 0;
		sindex++;
	}
	return (0);
}
