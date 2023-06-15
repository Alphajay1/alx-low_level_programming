#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width of array.
 * @height: height of array.
 *
 * Return: pointer to a 2-D array.
 */
int **alloc_grid(int width, int height)
{
	int **ipp;
	int h;
	int w;

	if (height <= 0 || width <= 0)
		return (NULL);

	ipp = malloc(height * sizeof(int *));

	for (h = 0; h < height; h++)
	{
		ipp[h] = malloc(width * sizeof(int));

		if (ipp[h] == NULL)
		{
			for (w = 0; w < h; w++)
			{
				free(ipp[w]);
			}
			free(ipp);
			return (NULL);
		}
		for (w = 0; w < h; w++)
			ipp[h][w] = 0;
	}
	return (ipp);
}
