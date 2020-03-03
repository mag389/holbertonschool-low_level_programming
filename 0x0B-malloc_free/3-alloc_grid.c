#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
*alloc_grid - prints a grid of integers
*Return:char* or null
*@width: width of the grid
*@height: height of the grid
*/
int **alocc_grid(int width, int height)
{
	int i, j;
	int **thegrid;

	if (width <= 0 || height <= 0)
		return (NULL);
	thegrid = malloc(sizeof(int*) * height);
	if (thegrid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		thegrid[i] = malloc(sizeof(int) * width);
		if (thegrid[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			thegrid[i][j] = 0;
		}
	}

	return (thegrid);
}
