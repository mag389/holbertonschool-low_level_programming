#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
*print_last_digit- tells absolute val of num
*
*Description:returns the last digit of n
*Return:last digit of n
*
*@n: a number
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar('0' + ((-1 * n) % 10));
		return ((-1 * n) % 10);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
/*	else
	{
		_putchar('0');
		return (0);
	}
*/
}
