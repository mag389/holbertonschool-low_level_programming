#include "holberton.h"

/**
* get_bit - return bit at index
* Return: value of the bit or -1 for errors
* @n: the number
* @index: the index of the bit in the number
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx;

	if (index >= 64)
		return (-1);
	idx = 1 << index;
	if (idx > n)
		return (-1);
	return ((n & idx) == idx);
}
