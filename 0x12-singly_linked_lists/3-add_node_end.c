#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
  * add_node_end - adds a new node at the end of a linked list
  * @head: pointer to head node
  * @str: string
  *
  * Return: address of new_node or NULL if it fails
  */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int x = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	x = strlen(str);
	new_node->len = x;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
		last = last->next;
		last->next = new_node;
	}

	return (new_node);
}
