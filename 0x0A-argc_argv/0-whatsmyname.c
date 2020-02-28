#include <stdio.h>
#include "holberton.h"

/**
*main - a program that prints it's name followed by a new line
*Return: 0
*@argc:size of argv array
*@argv:arguments passed to program
*/

int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", argv[0]);
	return (0);
}
