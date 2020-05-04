#include <stdio.h>
#include "holberton.h"

/**
*_memcpy - copies numbers from source to dest
*Return: pointer to memory area dest
*@src:source t ocopy from
*@dest: destinaiton to copy to
*@n:number of bytes to copy
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
