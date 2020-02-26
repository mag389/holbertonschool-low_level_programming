#include <stdio.h>
#include "holberton.h"

/**
*_pow_recursion - recursively gets power of a number
*Return: int equal to x ^y
*@x: value of number
*@y: value of power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
