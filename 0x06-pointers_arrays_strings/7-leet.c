#include "holberton.h"
#include <stdio.h>

/**
*leet - tr4nsl4t3s s7ring to l33t sp34k
*Return: a string with edited contents
*@a: string
*/
char *leet(char *a)
{
	int i = 0, j;
	char *s = "aAeEoOtTlL";
	char *n = "4433007711";

	while (*(a + i) != 0)
	{
		for (j = 0; j < 10; j++)
			if (a[i] == s[j])
				a[i] = n[j];
		i++;
	}
	return (a);
}
