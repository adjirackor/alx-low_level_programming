#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of integers passed to function
 * @separator: string to be printed between  numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	unsigned int result;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(list, int);
		printf("%d", result);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
