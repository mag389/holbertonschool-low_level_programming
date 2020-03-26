#include "holberton.h"

/**
* clear_bit - sets bit to zero
* Return: 1 for success 0 for failure
* @n: pointer to number to change
* @index: index of bit to clear
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int idx;

	if (index >= 64)
		return (-1);
	idx = 1 << index;
	*n = *n & ~idx;
	return (1);
}
