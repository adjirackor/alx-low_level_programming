#ifndef LISTS_H
#define LISTS_H

/**
  * struct list_s - singly linked list
  * @str: string 
  * @len: length of string
  * @next: pointer to next node
  *
  * Description: singly linked list node structure
  */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


#include <stddef.h>

size_t print_list(const list_t *h);

#endif /* LISTS_H */
