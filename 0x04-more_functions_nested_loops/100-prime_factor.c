#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long x;
	long max_fact;
	long y;
	double square;

	y = 612852475143;
	square = sqrt(y);

	for (x = 1; x <= square; x++)
	{
		if (y % x == 0)
		{
			max_fact = y / x;
		}
	}
	printf("%ld\n", max_fact);
	return (0);

}
