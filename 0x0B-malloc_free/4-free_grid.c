#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created.
 * @grid: 2 dimensional grid.
 * @h: height.
 */

void free_grid(int **grid, int h)
{
	int i;

	i = 0;
	while (i < h)
	{
		free(grid[i);
		i++;
	}
	free(grid);
}

