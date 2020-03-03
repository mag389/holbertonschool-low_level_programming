#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
*str_concat - concatenates two strings
*Return:char* or null
*@s1:the string to copy from
*@s2:string to append
*/
char *str_concat(char *s1, char *s2)
{
	int i, lens1 = 0, lens2 = 0;
	char *thearray;


	while (s1[lens1] != 0)
		lens1++;
	while (s2[lens2] != 0)
		lens2++;

	thearray = malloc((lens1 + lens2) * sizeof(char) + 1);

	if (thearray == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		thearray[i] = s1[i];
	for (i = 0; i < lens2; i++)
		thearray[i + lens1] = s2[i];
	thearray[lens1 + lens2] = 0;

	return (thearray);
}
