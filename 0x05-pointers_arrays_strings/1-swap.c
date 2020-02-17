#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*swap_int - swaps two ints
*
*Description:takes two *ints and swaps their values
*Return:void
*@a:given integer variable 1
*@b:given integer variable 2
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
