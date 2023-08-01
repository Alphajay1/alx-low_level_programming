#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  deletes the head node of a listint_t linked list.
 * @head: double pointer to the head of the list.
 *
 * Return: returns the head node’s data (n). or 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int index;

	if (*head == NULL)
		return (0);

	start = *head;
	index = (*head)->n;
	*head = (*head)->next;

	free(start);

	return (index);
}
