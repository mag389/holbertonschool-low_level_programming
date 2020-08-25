#include "search_algos.h"

/**
* linear_search - performs linear search for value in array
* Return: first index where value is located, or -1
* @array: pointer to first element of the array to search in
* @size: total number of elements of the array
* @value: the value to search for within the array
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	/* Null check */
	if (!array)
		return (-1);
	/* loop through checking for element */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	/* if not found retunr -1 */
	return (-1);
}
