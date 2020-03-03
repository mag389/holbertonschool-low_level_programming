#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*main - a program that prints min num of coins to make change
*Return: 0
*@argc:size of argv array
*@argv:arguments passed to program
*/

int main(int argc, char *argv[])
{
	int numofcoins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("%i\n", 0);
		return (0);
	}

	numofcoins += cents / 25;
	cents = cents % 25;

	numofcoins += cents / 10;
	cents = cents % 10;

	numofcoins += cents / 5;
	cents = cents % 5;

	numofcoins += cents / 2;
	cents = cents % 2;

	numofcoins += cents;
	printf("%i\n", numofcoins);
	return (0);
}
