#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer to the first node in the list.
 * @index: index of the node to be located.
 *
 * Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int locate;

	if (head == NULL)
		return (NULL);

	for (locate = 0; locate < index; locate++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
