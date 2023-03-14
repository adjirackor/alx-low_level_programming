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
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
