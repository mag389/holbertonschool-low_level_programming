#include "holberton.h"
#include <stdio.h>

/**
* _strcmp - compares 2 strings
*Return: value of difference
*@s1:string1
*@s2:string2
*/
int _strcmp(char *s1, char *s2)
{
	int lens1 = 0, lens2 = 0, i, value = 0;

	while (*(s1 + lens1) != 0)
		lens1++;
	while (*(s2 + lens2) != 0)
		lens2++;


	for (i = 0; i < lens1 && i < lens2; i++)
	{
		if (s1[i] != s2[i])
			{
			value = s1[i] - s2[i];
			break;
			}
	}
	return (value);
}
