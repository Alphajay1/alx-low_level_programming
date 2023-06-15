#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by
 * my alloc_grid function.
 * @grid: grid to be freed.
 * @height: height of the grid.
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);

	free(grid);
}
