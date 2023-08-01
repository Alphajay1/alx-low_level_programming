#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 * @head: double pointer to the first head node of the list.
 * @index: index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int list;
	listint_t *hold, *dup = *head;

	if (dup == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dup);
		return (1);
	}
	for (list = 0; list < (index - 1); list++)
	{
		if (dup->next == NULL)
			return (-1);
		dup = dup->next;
	}
	hold = dup->next;
	dup->next = hold->next;
	free(hold);
	return (1);
}
