#include <string.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - gives length of the string.
 * @s: string to count;
 *
 * Return: length of the string.
 */
int _strlen(const char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * add_node - adds node to linked list.
 * @head: pointer to head of linked list.
 * @str: string to insert.
 *
 * Return: number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *hold;

	hold = (malloc(sizeof(list_t)));
	if (!hold)
	{
		free(hold);
		return (NULL);
	}
	if (*head == NULL)
	{
		hold->next = *head;
		hold->str = strdup(str);
		hold->len = _strlen(str);
		*head = hold;
	}
	else
	{
		hold->next = *head;
		hold->str = strdup(str);
		hold->len = _strlen(str);
		*head = hold;
	}
	return (*head);
}
