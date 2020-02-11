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
	int d;

	if (n < 0)
	{
		d = -1 * n % 10;
		_putchar('0' + d);
		return (d);
	}
	else
	{
		d = n % 10;
		_putchar('0' + d);
		return (d);
	}
/*
*	origin putchar ((-1 * n) % 10)
*	else
*	{
*		_putchar('0');
*		return (0);
*	}
*/
}
