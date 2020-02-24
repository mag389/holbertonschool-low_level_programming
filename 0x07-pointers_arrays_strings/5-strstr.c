#include <stdio.h>
#include "holberton.h"

/**
*_strstr - searches a string for a substring
*Return: pointer to begin of substring or null
*@haystack:string to look through
*@needle: substringto look for
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int sindex = 0;
	unsigned int aindex = 0;
	int templength = 0;

	if (needle[0] == 0)
		return (haystack);
	while (haystack[sindex] != 0)
	{
		while (needle[aindex] != 0)
		{
			if (haystack[sindex] == needle[aindex])
			{
				templength++;
				sindex++;
				aindex++;
			}
			else
				break;
		}
		if (needle[aindex] == 0)
			return (&haystack[sindex - templength]);
		aindex = 0;
		sindex++;
	}
	return (0);
}
