#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: start point of the array.
 * @max: end point of the array.
 *
 * Return: a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *mem_Array;
	int i;

	if (min > max)
		return (NULL);

	mem_Array = malloc((max - min) * sizeof(int));

	if (mem_Array == NULL)
		return (NULL);

	for (i = min; i < max; i++)
		mem_Array[i] = i + 1;

	return (mem_Array);
}
