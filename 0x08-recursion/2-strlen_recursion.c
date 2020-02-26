#include <stdio.h>
#include "holberton.h"

/**
*_strlen_recursion - recursively finds length of a string
*Return: the length of the string
*@s: the string in question
*/

int _strlen_recursion(char *s)
{
	if (!s[0])
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
