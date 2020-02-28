#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*main - a program that prints sum of arguments
*Return: 0
*@argc:size of argv array
*@argv:arguments passed to program
*/

int main(int argc, char *argv[])
{
	int i, sum = 0, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if ((argv[i][j] > '9' || argv[i][j] < '0') && argv[i][j] != '-')
			{
			printf("Error\n");
			return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);

	return (sum);
}
