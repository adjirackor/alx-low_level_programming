#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	x = 100;
	for (y = 1; y <= x; y++)
	{
		/* for multiples of 15 */
		if ((y % 15) == 0)
			printf("FizzBuzz");
		/* for multiples of 3 */
		else if ((y % 3) == 0)
			printf("Fizz");
		/* for multiples of 5 */
		else if ((y % 5) == 0)
			printf("Buzz");
		else
			printf("%d", y);
		if (y != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
