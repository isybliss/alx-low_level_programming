#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t)); //allocate new node
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); // allocate string
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[length])
		length++;
	new_node->len = length; //allocate length
	new_node->next = NULL; //since it will be the last node

	if (*head == NULL) //if it was the last node
	{
		*head = new_node;
		return (new_node);
	}

	last = *head; //if the pointer is not null
	while (last->next) //transverse the node till it reaches the null pointer
		last = last->next;
	last->next = new_node;
	return (new_node);
}
