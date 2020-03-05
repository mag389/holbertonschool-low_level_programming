#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/*
*main - multiplies two numbers
*Return: o
*@argc: the size of argv
*@argv:numbers to multiply
*/

int main(int argc, char *argv[])
{
	int int1, int2;

	if (argc != 3)
	{
		printf("error\n");
		exit(98);
	}
	else
	{
	int1 = atoi(argv[1]);
	int2 = atoi(argv[2]);
	printf("%i\n", int1 * int2);
	}
	return (0);
}
