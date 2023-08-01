#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -  frees a listint_t list.
 * @head: a double pointer to the head of listint_t list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}
}
