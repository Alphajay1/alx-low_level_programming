#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the beginning of the listint_t list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
