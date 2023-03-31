#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_list - frees a linked list
  * @head: pointer to head node
  * Return: returns nothing
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
