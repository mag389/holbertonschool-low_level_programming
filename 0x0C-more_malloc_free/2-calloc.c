#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_calloc - allocates memorey for an array
*Return: pointer to allocated memory
*@nmemb: number of items in array
*@size: size of single element
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *thearray;

	if (nmemb == 0 || size == 0)
		return (NULL);
	thearray = malloc(nmemb * size);
	if (thearray == NULL)
		return (NULL);
	return (thearray);
}
