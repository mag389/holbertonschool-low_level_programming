#include "holberton.h"
#include <stdio.h>

/**
* _strncat - concatenates first n byts from one string
*Return: pointer to resulting str dest
*@src:string to append first n to end of other
*@dest:string to be appended to
*@n: number of elements from source to append to dest
*/
char *_strncat(char *dest, char *src, int n)
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

	for (i = lendest; i < newlength; i++)
	{
		dest[i] = src[i - lendest];
	}
	return (dest);
}
