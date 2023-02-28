/**
 * swap_int - swaps the values of two integers
 * @a: first integer value to be swapped
 * @b: second integer value to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
