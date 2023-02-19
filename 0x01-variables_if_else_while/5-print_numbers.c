#include <stdio.h>

/**
 * main - printing out single digit numbers of base 10
 *
 * Return - 0 (Success)
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
