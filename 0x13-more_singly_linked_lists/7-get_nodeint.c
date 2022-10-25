#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Finds the nth node in listint_t list
 * @head: Address of the first node in listint_t linked list
 * @index: Position of the node to returned
 * Return: The address of nth node of a listint_t linked list,
 * NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (counter < index)
	{
		head = head->next;
		counter++;
	}

	return (head);
}
