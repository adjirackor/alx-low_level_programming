#include <stdio.h>
/*
 * main - entry point
 * Return: 0 (Sucess)
 */

int main(void)
{	
	char x = 'a';
	
	while (x <= 'z')
	{
	
	
		if ((x == 'q') || (x == 'e') )
		 
	{
		putchar(x);
		x += 1;
	}	
	}
	putchar(10);
	return (0);
}
