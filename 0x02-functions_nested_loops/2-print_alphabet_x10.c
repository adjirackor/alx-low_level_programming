#include "main.h"
/**
 * print_alphabet_x10 - prints out alphabets 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10 (void)
{
	char x;
	int y;
	for(y = 1; y <= 10; y++)

	{
		for (x = 'a';x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');

	}

}
