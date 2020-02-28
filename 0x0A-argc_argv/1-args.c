#include <stdio.h>
#include "holberton.h"

/**
*main - a program that prints the number of arguments passed
*Return: 0
*@argc:size of argv array
*@argv:arguments passed to program
*/

int main(int argc, char *argv[])
{
	argv++;
	printf("%i\n", argc - 1);
	return (0);
}
