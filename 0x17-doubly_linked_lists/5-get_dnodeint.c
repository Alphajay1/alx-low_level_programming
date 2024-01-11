#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the linked list
 * @index:  is the index of the node, starting from 0
 *
 * Return: nth node, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int value = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (value == index)
			return (current);

		value++;
		current = current->next;
	}
	return (NULL);
}
