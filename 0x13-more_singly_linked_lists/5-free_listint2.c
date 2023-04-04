#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node, *next_node;

	if (head == NULL)
		return;

	new_node = *head;
	while (new_node != NULL)
	{
		next_node = new_node->next;
		free(new_node);
		new_node = next_node;
	}
	*head = NULL;
}
