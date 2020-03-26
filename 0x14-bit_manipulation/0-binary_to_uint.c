#include "holberton.h"

/**
* binary_to_uint - converts binary to unsigned int
* Return: the unsigned int, or zero
* @b: a string of 0 or 1 chars
* returns zero if there is an illegal char in b
* or b is null
*/
unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (i = 0, len--; len >= 0; i++, len--)
	{
		if (b[len] == '1')
			n += (1 << i);
	}
	return (n);
}
