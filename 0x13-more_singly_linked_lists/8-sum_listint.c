#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: pointer to head node
 * Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	if (head == NULL)
		return (0);
	node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);


}
