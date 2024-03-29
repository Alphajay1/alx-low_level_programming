#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the beginning of a linked list
 * @idx:  is the index of the list where the new node should
 * be added. Index starts at 0
 * @n: data to put in new node
 *
 * Return: pointer to new node, else return NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *next;
	unsigned int index;

	if (h == NULL)
		return (NULL);

	if (idx != 0)
	{
		current = *h;
		for (index = 0; index < idx - 1 && current != NULL; index++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
