#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to first head node in list.
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: value of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int new_node;
	listint_t *list, *new_list;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		list = *head;
		for (new_node = 0; new_node < idx - 1 && list != NULL; new_node++)
		{
			list = list->next;
		}
		if (list == NULL)
			return (NULL);
	}
	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	if (idx == 0)
	{
		new_list->next = *head;
		*head = new_list;
		return (new_list);
	}
	new_list->next = list->next;
	list->next = new_list;
	return (new_list);
}
