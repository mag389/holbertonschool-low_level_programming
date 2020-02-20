#include "holberton.h"
#include <stdio.h>

/**
* _strncpy - copies first n byts from one string
*Return: pointer to resulting str dest
*@src:string to append first n to end of other
*@dest:where to copy to
*@n: number of elements from source to copy to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int lensrc = 0, lendest = 0, i, newlength;

	while (*(src + lensrc) != 0)
		lensrc++;
	while (*(dest + lendest) != 0)
		lendest++;
	if (n < lensrc)
		newlength = lendest + n;
	else
		newlength = lendest + lensrc;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
