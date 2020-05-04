#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
*_isalpha- tells whether the letter is a letter
*
*Description:returns is it is a letter
*Return:1 for letter else 0
*
*@c: a character's ascii number
*/
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
