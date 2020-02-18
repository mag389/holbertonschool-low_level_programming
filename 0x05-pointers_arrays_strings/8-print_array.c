#include <stdio.h>
#include "holberton.h"

/**
*print_array - prints subarray
*
*Description: prints first n elements of arrray
*Return: void
*@a: array
*@n: number of elements to print
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%i, ", a[i]);
	printf("%d\n", a[n - 1]);
}
