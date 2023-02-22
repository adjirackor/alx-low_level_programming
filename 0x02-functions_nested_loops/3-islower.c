#include  "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1(Success) 0(otherwise)
 */

int _islower(int c)
{
	int x;

	x = c;
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
