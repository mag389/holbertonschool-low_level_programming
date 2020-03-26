#include "holberton.h"

/**
* print_binary - prints binary represenation of a number
* Return: void
* @n: the number to convert
*/
void print_binary(unsigned long int n)
{
	unsigned long int cpy = n, digits = 1;
	int max_digits = 0;

	cpy = cpy >> 1;
	while (cpy != 0)
	{
		digits = digits << 1;
		cpy = cpy >> 1;
		max_digits++;
	}
	while (digits != 0)
	{
		_putchar('0' + ((n & digits) == digits));
		digits = (digits >> 1);
	}
}
