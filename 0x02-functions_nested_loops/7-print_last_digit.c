#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: number to be checked
 *
 * Return: the value of the last digit
 */
int print_last_digit(int x)
{
	/* formula for finding last digit of a number  */
	x = x % 10;
	if (x < 0)
	{
		x *= -1;
	}

	_putchar(x + '0');

	return (x);

}
