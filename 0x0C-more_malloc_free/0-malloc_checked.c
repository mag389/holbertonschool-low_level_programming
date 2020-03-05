#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
*malloc_checked - allocates memory using malloc
*Return: pointer to allocated memory
*@b: the amount of memory needed
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
