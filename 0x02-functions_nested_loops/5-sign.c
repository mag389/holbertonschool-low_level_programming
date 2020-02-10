#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
*print_sign- tells if n><=0
*
*Description:returns the sign
*Return:1 for pos,0 for 0, else -1
*
*@n: a number
*/
int print_sign(int n)
{
	if (n > 0)
		{
		_putchar('+');
		return (1);
		}
	else if (n == 0)
		{
		_putchar('0');
		return (0);
		}
	else
		{
		_putchar('-');
		return (-1);
		}

}
