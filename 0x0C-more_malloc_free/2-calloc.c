#include <stdlib.h>
/**
  * _calloc - allocates memory for an array of nmemb elements
  * @nmemb: size of elements in array
  * @size: size of array
  *
  * Return: pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < j)
	{
		arr[i]  = 0;
		i++;
	}
	return (arr);
}
