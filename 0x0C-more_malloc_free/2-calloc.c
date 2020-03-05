#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
*_calloc - allocates memorey for an array
*Return: pointer to allocated memory
*@nmemb: number of items in array
*@size: size of single element
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *thearray;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	thearray = malloc(nmemb * size);
	if (thearray == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		thearray[i] = 0;
	return ((void *)thearray);
}
