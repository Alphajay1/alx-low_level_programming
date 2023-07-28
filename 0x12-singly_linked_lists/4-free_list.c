#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees a list_t list.
 * @head: pointer to list_t list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *index;

	while (head)
	{
		index = head->next;
		free(head->str);
		free(head);
		head = index;
	}
}
