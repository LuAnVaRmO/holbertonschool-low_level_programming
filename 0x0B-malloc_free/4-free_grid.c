#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free the memory
 * @grid: grid
 * @height: height of grid
 * Description: free the memory
 * Return: void
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
