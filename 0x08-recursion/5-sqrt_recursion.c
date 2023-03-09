#include "main.h"
/**
  * sqr_root - finds the natural square root of a number
  * @n: value passed to function
  * @i: number to be tested
  *
  * Return: square root (int) or -1 if no square root
  */
int sqr_root(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if (i == n / 2)
		return (-1);
	return (sqr_root(n, i + 1));
}
/**
  * _sqrt_recursion - returns the natural square root of number
  * @n: value passed to function
  *
  * Return: square root or -1
  */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqr_root(n, i));
}
