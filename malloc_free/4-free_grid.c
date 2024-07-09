#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the allocated memory
 *
 * @grid: value holder array matrix
 * @height: array height
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height > 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
