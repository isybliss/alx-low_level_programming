#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees list_t list.
 * @head: Double pointer to the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}
}
