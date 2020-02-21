#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*infinite_add - adds two very large numbers
*Return: the sum of the two numbers as char*
*@n1:first number to add
*@n2: second number to add
*@r:buffer used to store the result
*@size_r:the buffer size
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1len = 0, n2len = 0, d1, d2, smallsum, remainder = 0, i;
	int smallerlen = 0, j = 0;

	while (*(n1 + n1len) != '\0')
		n1len++;
	while (*(n2 + n2len) != '\0')
		n2len++;
	if (n1len < n2len)
		smallerlen = n1len;
	else
		smallerlen = n2len;
	if (n1len >= size_r - 1 || n2len >= size_r - 1)
		return (0);
	if (n1len == n2len && n1len >= size_r - 1)
	{
		if (n1[0] - 48 + n2[0] - 48 >= 10)
			return (0);
	}
	for (i = 0; i < size_r; i++)
	{
		if (i + 1 <= n1len)
			d1 = n1[n1len - i - 1] - 48;
		else
			d1 = 0;
		if (i + 1 <= n2len)
			d2 = n2[n2len - i - 1] - 48;
		else
			d2 = 0;
		smallsum = d1 + d2 + remainder;
		r[size_r - i] = smallsum % 10 + 48;
		if (smallsum >=  10)
			remainder = 1;
		else
			remainder = 0;
		if (i == size_r - 1 && remainder == 1)
			return (0);
	}
	while (!(r[j] >= '1' && r[j] <= '9'))
		j++;
	return (&r[j]);
}
