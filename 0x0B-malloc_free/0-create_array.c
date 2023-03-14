#include <stdlib.h>
#include "main.h"
/**
  * create_array - creates an array of chars
  * @size: size of the array to be created
  * @c: specified char with which array is initialized
  *
  * Return: pointer to created array
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
