#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
*free_grid - prints a grid of integers
*Return:char* or null
*@grid: the grid
*@height: height of the grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
