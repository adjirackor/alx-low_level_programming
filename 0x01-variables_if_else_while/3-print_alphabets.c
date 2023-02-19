#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x += 1;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y += 1;
	}
	putchar(10);

	return (0);
}
