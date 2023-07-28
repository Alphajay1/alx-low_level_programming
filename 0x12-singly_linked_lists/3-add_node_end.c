#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to head of the list.
 * @str: string to be added to list.
 *
 * Return: address of new node, NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start, *finish;
	char *cp;
	int length;

	start = malloc(sizeof(list_t));
	if (start == NULL)
		return (NULL);

	cp = strdup(str);
	if (str == NULL)
	{
		free(start);
		return (NULL);
	}
	for (length = 0; str[length];)
		length++;

	start->str = cp;
	start->len = length;
	start->next = NULL;

	if (*head == NULL)
		*head = start;

	else
	{
		finish = *head;
		while (finish->next != NULL)
			finish = finish->next;
		finish->next = start;
	}
	return (*head);
}
