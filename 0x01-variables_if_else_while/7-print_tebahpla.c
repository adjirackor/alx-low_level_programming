#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0(Success)
 */

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x -= 1;
	}
	putchar(10);
	return (0);
}
