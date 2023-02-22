#include "main.h"
/**
 * print_alphabet - prints out alphabets 10 times
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char x;
	int y;

	for (y = 1; y <= 10; y++)

	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');

	}

}
