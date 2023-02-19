#include <stdio.h>
/**
 * main - Prints out single digits
 *
 * Description: Main function prints out all single digit numbers of base 10.
 *
 * return:0123456789
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		x += 1;
	}
	putchar(10);
	return (0);
}
