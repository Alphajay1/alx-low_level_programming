#include "lists.h"
#include <stdio.h>

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: a pointer to the head of the singly linked list.
 *
 * Return:  returns the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
