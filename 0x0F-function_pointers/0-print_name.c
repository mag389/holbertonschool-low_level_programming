#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
*print_name - prints a name
*Return: void
*@name: the name to be printed
*@f:the function to do to name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
