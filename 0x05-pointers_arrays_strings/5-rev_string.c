#include "main.h"
/**
 * rev_string - reverses a strings
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int x;
	int y;
	char z;

	x = 0;
	y = 0;
	while (*(s + y) != '\0')
	{
		y++;
	}
	x = y;
	for (y = x - 1; y >= x / 2; y--)
	{
		z = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = z;
	}

}
