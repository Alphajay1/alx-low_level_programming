#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: pointer to the start header of a linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
