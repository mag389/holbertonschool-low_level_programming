#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
*alloc_grid - allocates memory for gri of ints
*Return:char* or null
*@width: width of the grid
*@height: height of the grid
*/
int **alloc_grid(int width, int height)
{
	int i, j, p = 0;
	int **thegrid;

	if (width <= 0 || height <= 0)
		return (NULL);
	thegrid = malloc(sizeof(int *) * height);
	if (thegrid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		thegrid[i] = malloc(sizeof(int) * width);
		if (thegrid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(thegrid[j]);
			free(thegrid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			thegrid[i][j] = p;
		}
	}

	return (thegrid);
}
