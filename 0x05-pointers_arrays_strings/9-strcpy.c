#include <stdio.h>
#include "holberton.h"

/**
*_strcpy - copies string
*
*Description: copies string from src to dest
*Return: the pointer to dest
*@dest: the destination
*@src: the source string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
