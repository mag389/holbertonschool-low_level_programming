#include "holberton.h"

/**
* set_bit - sets bit to one
* Return: 1 on succes or -1 on failure
* @n: pointer to the int to change
* @index: index of the bit to set
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int idx;

	if (index >= 64)
		return (-1);
	idx = 1 << index;
	*n = *n | idx;
	return (1);
}
