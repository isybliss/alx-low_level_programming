#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of listint_t.
 * @h: Pointer to the head of the list.
 * Return: no of nodes.
 **/

size_t print_listint(const listint_t *h)
{
	size_t no_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		no_of_nodes++;
		h = h->next;
	}
	return (no_of_nodes);
}
