#include <stdio.h>
#include "holberton.h"
int tinysqrt(int n, int count);
/**
*_sqrt_recursion - gives natural square root of number
*Return:the square root of n or -1
*@n:number to find sqrt of
*/

int _sqrt_recursion(int n)
{
	return (tinysqrt(n, 1));
}

/**
*tinysqrt - recursive sqrt with extra var
*Return: the square root
*@n:current number we want square of
*@count:the count of how deep we are
*/
int tinysqrt(int n, int count)
{
	if (n < 0)
		return (-1);
	if (n - count * count == 0)
		return (count);
	else if (n - count * count > 0)
		return (tinysqrt(n, count + 1));
	else
		return (-1);
}
