#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
*_abs- tells absolute val of num
*
*Description:returns the absolute value
*Return:abs(n)
*
*@n: a number
*/
int _abs(int n)
{
	if (n > 0)
		{
		return (1);
		}
	else if (n == 0)
		{
		return (0);
		}
	else
		{
		return (-1 * n);
		}

}
