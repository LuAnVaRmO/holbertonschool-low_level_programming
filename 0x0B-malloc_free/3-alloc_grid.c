#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - create an grid of 2 dimensions
 * @width: width of the arrayof characters
 * @height: height of grid
 * Description: create a grid bidemensional
 * Return: int grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, **g;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = (int **) calloc(height * sizeof(int *));

	if (g == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		g[i] = (int *)calloc(sizeof(int) * width);
		if (g[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width ; j++)
		{
			g[i][j] = 0;
		}
	}
	return (g);
}
