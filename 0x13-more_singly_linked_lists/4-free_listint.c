#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head node
 */

void free_listint(listint_t *head)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	free(new_node);
	free(head);
}
