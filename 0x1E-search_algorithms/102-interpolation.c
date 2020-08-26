#include "search_algos.h"

/**
* interpolation_search - performs an interpolation search
* Return: the index of value or -1
* @array: pointer to first index of int array
* @size: the size of the array
* @value: the value to search for
*/
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low = 0, high, mid;

	if (!array || size == 0)
		return (-1);
	high = size - 1;
	while (array[high] != array[low] && array[low] <= value &&
		array[high] >= value)
	{
		mid = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (mid >= size)
		{
			printf("Value checked array[%u] is out of range\n", mid);
			return (-1);
		}
		printf("Value checked array[%u] = [%i]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	if (array[low] == value)
		return (low);
	mid = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
	if (mid >= size)
	{
		printf("Value checked array[%u] is out of range\n", mid);
		return (-1);
	}
	/* printf("mid is %u\n", mid);*/
	return (-1);
}
