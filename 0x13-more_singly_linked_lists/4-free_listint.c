#include "lists.h"

/**
 * free_listint - Frees a list_t list
 * @head: address of the first node of list_t
 */

void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
