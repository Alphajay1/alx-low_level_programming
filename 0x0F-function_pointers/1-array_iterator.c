#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array.
 * @array: an array of integers.
 * @size: size of the array.
 * @action: is a pointer to the function you want to use.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
