#include "search_algos.h"
void print_array(int *array, size_t size);
/**
* binary_search - performs binary search for value in array
* Return: first index where value is located, or -1
* @array: pointer to first element of the array to search in, ASC unique
* @size: total number of elements of the array
* @value: the value to search for within the array
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int mid;
	int temp;

	mid = size / 2 - 1 + size % 2;
	if (!array)
		return (-1);
/*	printf("mid is %u", mid);*/
	print_array(array, size);
	if (size == 1)
	{
		if (array[0] == value)
			return (0);
		return (-1);
	}
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search(array, mid, value));
	temp = binary_search((array + mid + 1), mid + 1 - size % 2, value);
	if (temp < 0)
		return (temp);
	else
		return (mid  + 1 + temp);
}

/**
* print_array - prints the array
* Return: void
* @array: pointer to first element
* @size: how much to print
*/
void print_array(int *array, size_t size)
{
	unsigned int i;

	printf("Searching in array: %i", array[0]);
	for (i = 1; i < size; i++)
		printf(", %i", array[i]);
	printf("\n");
}
