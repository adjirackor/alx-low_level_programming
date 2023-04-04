#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to a pointer to the head node
 * @n: data of node
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	if (new_node == NULL)
		return (NULL);

	return (*head);
}
