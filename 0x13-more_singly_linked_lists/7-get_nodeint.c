#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @index: index of the node
 * @head: pointer to head of node
 * Return: the nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	new_node = head;

	while (new_node != NULL)
	{
		if (count == index)
			return (new_node);
		count++;
		new_node = new_node->next;
	}
	return (NULL);
}
