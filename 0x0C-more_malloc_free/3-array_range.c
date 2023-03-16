#include <stdlib.h>
/**
  * array_range - creates an array of range of int
  * @min: mininum value
  * @max: maximum value
  *
  * Return: pointer to newly created array
  */
int *array_range(int min, int max)
{
	int *array;
	int range;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	range = (max - min) + 1;
	array = malloc(range * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < range; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
