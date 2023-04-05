#include <stdlib.h>
#include "lists.h"
/**
  * delete_nodeint_at_index - deletes the node at index of a linked list
  * @head: pointer to pointer to head node
  * @index: index of node to be deleted
  * Return: success (1) or failure (-1)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = malloc(sizeof(listint_t));
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index)
	{
		new = temp;
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (-1);
	new->next = temp->next;
	free(temp);
	
	return (1);

}
