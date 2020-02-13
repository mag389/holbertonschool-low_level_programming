#include <stdio.h>
#include "holberton.h"
int mypow(int a, int b);
/**
*print_number - prnts any nunmber
*mypow - return a^b
*Description:prints any integer using only put
*
*Return:void
*@n: the number to print
*/

void print_number(int n)
{
	int d = 1;
	int i;

	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			_putchar('2');
			n = n % mypow(10, 9);
		}
		n = n * -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = 0; i < 10; i++)
		{
			if (n / mypow(10, i) > 0)
				d = i;
		}
		for (i = d; i >= 0; i--)
		{
			_putchar('0' + n / mypow(10, i) % 10);
		}
	}
}
/**
*mypow- exponent
*Return: a^b
*@a:number
*@b:exponent
*/
int mypow(int a, int b)
{
	int i;
	int r = 1;

	for (i = 0; i < b; i++)
	{
		r = r * a;
	}
	return (r);
}
