#include "holberton.h"
#include <stdio.h>

/**
*cap_string - uppercases first letter of words in string
*Return: a string with all uppercase words
*@a: string
*/
char *cap_string(char *a)
{
	int i = 0, j;
	char *s = "	 \n,;.!?\"(){}";

	if (a[i] >= 'a' && a[i] <= 'z')
		a[i] -= 32;
	i++;

	while (*(a + i) != 0)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			for (j = 0; j < 12; j++)
			{
				if (a[i - 1] == s[j])
					a[i] -= 32;
			}
		i++;
	}
	return (a);
}
