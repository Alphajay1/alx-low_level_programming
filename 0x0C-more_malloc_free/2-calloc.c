#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of bytes of the array.
 *
 * Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * sizeof(int));

	if (mem == NULL)
		return (NULL);

	return (mem);
}
