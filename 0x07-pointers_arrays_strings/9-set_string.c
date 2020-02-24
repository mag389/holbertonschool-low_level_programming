#include <stdio.h>
#include "holberton.h"

/**
*set_string - sets the value of a pointer to a char
*Return: void
*@s:pointer to pointer to first char
*@to: the *char to change s to
*/

void set_string(char **s, char *to)
{
	*s = to;
}
