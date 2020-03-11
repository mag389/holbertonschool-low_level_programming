#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
*get_op_func - returns the function
*Return: the two numbers, with an opartion done to them
*@s: the operation symbol
*
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == (*(ops + i)->op))
			return (*(ops + i)->f);
		i++;
	}
	return (*(ops + i)->f);
}
