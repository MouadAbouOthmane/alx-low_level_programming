#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers.
 * @w: width.
 * @h: height.
 *
 * Return: a 2 dimensional array of integers.
 */

int **alloc_grid(int w, int h)
{
	int i, j;
	int **grid;

	if (w < 1 || h < 1)
	{
		return (0);
	}

	grid = malloc(sizeof(*grid) * h);

	if (grid == 0)
	{
		return (0);
	}

	for (i = 0; i < h; i++)
	{
		grid[i] = malloc(sizeof(**grid) * w);
		if (grid[i] == 0)
		{
			while (i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (0);
		}
		for (j = 0; j < w; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
