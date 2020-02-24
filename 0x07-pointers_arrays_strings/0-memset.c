#include <stdio.h>
#include "holberton.h"

/**
*_memset - fills memory with a constant byte
*Return: pointer to memory area s
*@s:memory area to change
*@b: constant byte b to change to
*@n:number of bytes to change into b
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
