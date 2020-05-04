#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
*_islower- tells whether the letter is lowercase
*
*Description:returns value of upper or lower
*Return:1 for lowercase else 0
*
*@c: a character's ascii number
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
