#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>
/**
*print_to_98- prints the nums from n to 98
*
*Description:print the table
*Return:nothing
*
*@n: the arg num
*/
void print_to_98(int n)
{
	if (n == 98)
		{
		printf("%d\n", n);
		}
	else if (n > 98)
		{
		printf("%d, ", n);
		print_to_98(n - 1);
		}
	else if (n < 98)
		{
		printf("%d, ", n);
		print_to_98(n + 1);
		}
}
