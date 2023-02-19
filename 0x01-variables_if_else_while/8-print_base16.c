#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char x = 'a';
	int y = 0;

	while (y < 10)
	{
		putchar(y + '0');
		y += 1;
	}
	while (x <= 'f')
	{
		putchar(x);
		x += 1;
	}
	putchar(10);
	return (0);
}
