#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;
	const list_t *hot = h;

	while (hot != NULL)
	{
		if (hot->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", hot->len, hot->str);
		}
		hot = hot->next;
		x++;
	}
	return (x);
}
