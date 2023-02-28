#include <stdio.h>
/**
  * print_array - prints n elements of an array
  * @n: number of elements to be printed
  * @a: array of integers
  *
  * Return: void
  */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
