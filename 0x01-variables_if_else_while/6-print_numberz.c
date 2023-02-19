#include <stdio.h>
/**
 * main - Prints out single digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		x += 1;
	}
	putchar(10);
	return (0);
}
