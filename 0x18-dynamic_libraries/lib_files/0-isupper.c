#include "holberton.h"
#include <stdio.h>

/**
*_isupper - checks for uppercase letter
*
*Description:checks if numbers is uppercase
*Return:1 is upper else 0
*@c: the char being tested
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
