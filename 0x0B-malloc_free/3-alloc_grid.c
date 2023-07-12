#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: the 2_dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **dd_array;
	int h;
	int w;

	if (height <= 0 || width <= 0)
		return (NULL);

	dd_array = malloc(height * sizeof(int *));

	if (dd_array == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		dd_array[h] = malloc(width * sizeof(int));

		if (dd_array[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(dd_array[w]);
			free(dd_array);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			dd_array[h][w] = 0;
	}
	return (dd_array);
}
