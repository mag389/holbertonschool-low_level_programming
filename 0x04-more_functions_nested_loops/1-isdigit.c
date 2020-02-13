#include "holberton.h"
#include <stdio.h>

/**
*_isdigit - checks for digit
*
*Description:checks if numbers is digit
*Return:1 if digit else 0
*@c: the char being tested
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
