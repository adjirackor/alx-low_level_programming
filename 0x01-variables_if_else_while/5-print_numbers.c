#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x += 1;
	}
	putchar(10);

	return (0);
}
