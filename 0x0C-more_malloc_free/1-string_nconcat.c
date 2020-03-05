#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*string_nconcat - concats 2 strings together
*Return: memory addres containing s1 and n bytes of s2
*@s1: first string
*@s2: string to concat on end
*@n: bytes to concat
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newspot;
	unsigned int lens1 = 0, lens2 = 0, i;

	if (s1 != NULL)
		for (lens1 = 0; s1[lens1] != 0; lens1++)
			;
	if (s1 != NULL)
		for (lens2 = 0; s1[lens2] != 0; lens2++)
			;
	if (n > lens2)
		n = lens2;
	newspot = malloc(sizeof(char) * (lens1 + n) + 1);
	if (newspot == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		newspot[i] = s1[i];
	for (; i - lens1 < n; i++)
		newspot[i] = s2[i - lens1];
	return (newspot);
}
