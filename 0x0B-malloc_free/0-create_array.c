#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
*create_array - creates array
*Return:char or null
*@size: the size of the array
*@c:the character to fill it with
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *thearray;

	if (size == 0)
		return (NULL);
	thearray = malloc(size * 2);

	for (i = 0; i < size; i++)
	{
		thearray[i] = c;
	}
	thearray[i] = 0;

	return (thearray);
}
