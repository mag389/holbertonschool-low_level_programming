#include "holberton.h"
#include <stdio.h>

/**
* _strcat - concatenates two strings
*Return: pointer to resulting str dest
*@src:string to append to end of other
*@dest:string to be appended to
*/
char *_strcat(char *dest, char *src)
{
	int lensrc = 0, lendest = 0, i, newlength;

	while (*(src + lensrc) != 0)
		lensrc++;
		;
	while (*(dest + lendest) != 0)
		lendest++;
		;
	newlength = lendest + lensrc + 1;

	for (i = lendest; i < newlength; i++)
	{
		dest[i] = src[i - lendest];
	}
	dest[newlength] = '\0';
	return (dest);
}
