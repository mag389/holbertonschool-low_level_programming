#include "holberton.h"
#include <stdio.h>

/**
*string_toupper - uppercases letters in char array
*Return: a string with all uppercase values
*@a: string
*/
char *string_toupper(char *a)
{
	int i = 0;

	while (*(a + i) != 0)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}
