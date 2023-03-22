#include "function_pointers.h"
#include <stddef.h>
/**
  * array_iterator - executes a function given as a parameter 
  * on each element of array
  * @array: pointer to array
  * @size: size of array
  * @action: function to be executed on each element of array
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
