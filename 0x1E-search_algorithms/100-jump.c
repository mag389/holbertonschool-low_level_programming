#include "search_algos.h"
#include <math.h>

/**
* jump_search - performs a jump search
* @array: pointer to first node of array to look through
* @size: size of array to search
* @value: value to search for
* Return: the index of the value, or -1
*/
int jump_search(int *array, size_t size, int value)
{
	unsigned int a = 0, b = 0, jump;

	if (!array || size == 0)
		return (-1);
	jump = sqrt(size);
	while (b < size && array[b] < value)
	{
		a = b;
		b += jump;
		printf("Value checked array[%u] = [%i]\n", a, array[a]);
		if (a >= size)
			return (-1);
	}
	printf("Value found between indexes [%u] and [%u]\n", a, b);
	while (array[a] < value)
	{
		printf("Value checked array[%u] = [%i]\n", a, array[a]);
		a += 1;
		if (a == b + 1 || a == size)
			return (-1);
	}
	printf("Value checked array[%u] = [%i]\n", a, array[a]);
	if (array[a] == value)
		return (a);
	return (-1);
}
