#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (c < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{

					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
		}
		e++;
	}
	putchar(10);
	return (0);
}
