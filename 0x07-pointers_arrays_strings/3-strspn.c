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
	unsigned int sindex = 0;
	unsigned int aindex = 0;

	if (accept[0] == 0)
		return (0);
	while (s[sindex] != 0)
	{
		while (accept[aindex] != 0)
		{
			if (s[sindex] == accept[aindex])
				{
				sindex++;
				aindex = 0;
				break;
				}
			aindex++;
		}
		if (aindex != 0)
			return (sindex);
	}
	return (sindex);
}
