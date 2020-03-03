#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
*_strdup - creates array
*Return:char or null
*@str:the string to copy from
*/
char *_strdup(char *str)
{
	int i, size = 0;
	char *thearray;

	if (str == NULL)
		return (NULL);

	while (str[size] != 0)
		size++;
	thearray = malloc(size * sizeof(*str));

	if (thearray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		thearray[i] = str[i];
	}

	return (thearray);
}
