#include <stdlib.h>
#include "lists.h"
/**
  * list_len - returns the number of elements in a linked list
  * @h: linked list
  *
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	const list_t *hot = h;
	size_t x = 0;

	while (hot != NULL)
	{
		x++;
		hot = hot->next;
	}

	return (x);
}
