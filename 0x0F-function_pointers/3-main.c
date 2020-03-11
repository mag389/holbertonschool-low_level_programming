#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
*main - returns the result of a operation
*Return: number corresponding to output
*@argc: numbre of args
*@argv: the arguments
*/

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = (*get_op_func)(argv[2]);
	if (func == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	c = func(a, b);
	printf("%i\n", c);

	return (0);
}
