#include <stdio.h>
#include "holberton.h"

/**
*print_diagsums - prints the sums of diagonals
*Return: void
*@a:matrix to go through
*@size: the size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
		sum1 += a[i];
	for (i = size - 1; i < size * size - 1; i += (size - 1))
		sum2 += a[i];
	printf("%i, %i\n", sum1, sum2);
}
