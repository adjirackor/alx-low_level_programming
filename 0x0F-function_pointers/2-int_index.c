#include "function_pointers.h"
/**
  * int_index - searches for an integer
  * @array: a pointer to an array
  * @size: number of elements in the array
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: index of the first element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	if (i == size)
		return (-1);

	return (i);
}
