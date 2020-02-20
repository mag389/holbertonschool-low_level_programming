#include "holberton.h"
#include <stdio.h>

/**
*reverse_array - reverses array
*return: void
*@a: the array of ints
*@n: number of elements
*/
void reverse_array(int *a, int n)
{
	int temp, lena = 0, i;

	while (*(a + lena) != 0)
		lena++;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

}
