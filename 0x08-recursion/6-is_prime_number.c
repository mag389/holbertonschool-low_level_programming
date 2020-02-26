#include <stdio.h>
#include "holberton.h"
int tinyprime(int n, int count);
/**
*is_prime_number - tells primeness of a number
*Return:1 if prime else 0
*@n:number to check
*/

int is_prime_number(int n)
{
	return (tinyprime(n, 2));
}

/**
*tinyprime - find prime with extra var
*Return: 1 or 0
*@n:current number we want square of
*@count:the count of how deep we are
*/
int tinyprime(int n, int count)
{
	if (n <= 1)
		return (0);
	if (n - count * count < 0)
		return (1);
	else if (n / count * count == n)
		return (0);
	else
		return (tinyprime(n, count + 1));
}
