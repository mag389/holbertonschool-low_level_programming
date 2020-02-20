#include "holberton.h"
#include <stdio.h>

/**
*rot13 - encode in rot13
*Return: a string with encrypted contents
*@a: string
*/
char *rot13(char *a)
{
	int i = 0, j;
	char *low = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *hiw = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(a + i) != 0)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == low[j])
			{
				a[i] = hiw[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
