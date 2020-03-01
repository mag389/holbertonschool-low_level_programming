#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*main - a program that prints all arguments passed
*Return: 0
*@argc:size of argv array
*@argv:arguments passed to program
*/

int main(int argc, char *argv[])
{
	int int1, int2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	int1 = atoi(argv[1]);
	int2 = atoi(argv[2]);
	printf("%i\n", int1 * int2);
	}
	return (0);
}
