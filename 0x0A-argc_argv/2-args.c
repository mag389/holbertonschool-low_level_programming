#include <stdio.h>
#include "holberton.h"

/**
*main - a program that prints all arguments passed
*Return: 0
*@argc:size of argv array
*@argv:arguments passed to program
*/

int main(int argc, char *argv[])
{
	while (argc-- > 0)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
