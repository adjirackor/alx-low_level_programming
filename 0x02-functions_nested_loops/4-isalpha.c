#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: the character being checked
 *
 * Return: 1(Success) 0(Otherwise)
 */

int _isalpha(int c)
{
	int x;

	x = c;
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
