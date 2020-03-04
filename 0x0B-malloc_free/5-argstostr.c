#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
*argstostr - concatenates all args
*Return: pointer to new string or null
*@ac:number of elements
*@av: 2d pointer to elements
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, sizeofarg = 0, totalarglength = 0;
	char *newstring;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][sizeofarg] != 0)
			sizeofarg++;
		totalarglength += sizeofarg * sizeof(char);
	}
	newstring = malloc(totalarglength + ac + 1);
	if (newstring == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			newstring[k] = av[i][j];
			k++;
		}
		newstring[k] = '\n';
		k++;
	}
	return (newstring);
}
