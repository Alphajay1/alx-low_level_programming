#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated with a call to malloc.
 * @old_size: is the size in bytes of the allocated space for ptr.
 * @new_size: new size in bytes of the new memory block.
 *
 * Return: a pointer to the new memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *temp_copy_ptr;
	unsigned int i;
	unsigned int new_limit;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	new_limit = new_size;
	if (new_size > old_size)
		new_limit = old_size;

	temp_copy_ptr = ptr;
	for (i = 0; i < new_limit; i++)
	{
		new_ptr[i] = temp_copy_ptr[i];
	}
	free(ptr);

	return (new_ptr);
}
