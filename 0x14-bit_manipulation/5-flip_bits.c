#include "holberton.h"

/**
* flip_bits - number of bits to flip to get from one num to another
* Return: the number of bits
* @n: the first number
* @m: the second number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int idx;
	unsigned int flips = 0;

	idx = n ^ m;
	while (idx != 0)
	{
		if ((1 & idx) > 0)
			flips++;
		idx = idx >> 1;
	}
	return (flips);
}
