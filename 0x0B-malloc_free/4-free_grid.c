#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the two dimensinal grid
 * @grid: dimension to be freed
 * @height: height of the grid
 * Return: freed grid
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
