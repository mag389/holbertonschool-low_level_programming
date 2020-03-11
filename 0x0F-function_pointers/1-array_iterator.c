#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
*array_iterator - does an actoin on each element of an array
*Return: void
*@array: the array
*@size: size of the array
*@action: the funciton to do on each element of the array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size == 0 || array == NULL || action == NULL)
		exit(0);
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
