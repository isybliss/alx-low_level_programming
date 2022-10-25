#include "lists.h"

/**
 * listint_len - returns the number of elemets in linked listint_t list
 * @h: Pointer to the head node of the linked list
 * Return: size_t, the number of nodes in alinked list
 */

size_t listint_len(const listint_t *h)
{
	size_t no_of_nodes = 0;

	while (h)
	{
		no_of_nodes++;
		h = h->next;
	}

	return (no_of_nodes);
}
