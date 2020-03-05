#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
*array_range - make array of subsequent numbers
*Return: the int array
*@min: the starting number (inclusive)
*@max: the last number (inclusive)
*/
int *array_range(int min, int max)
{
	int i;
	int *thearray;

	if (min > max)
		return (NULL);
	thearray = malloc(sizeof(int) * (max - min + 1));
	if (thearray == NULL)
		return (NULL);

	for (i = 0; i + min <= max; i++)
		thearray[i] = min + i;
/*	thearray[i] = '\0';*/
	return (thearray);
}
