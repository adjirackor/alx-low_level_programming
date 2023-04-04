#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes head nodes of a linked list
 * @head: pointer to pointer to head node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node = *head;
	int s;

	if (*head == NULL)
		return (0);

	s = (*head)->n;
	*head = (*head)->next;
	new_node->next = NULL;

	free(new_node);
	return (s);
}
