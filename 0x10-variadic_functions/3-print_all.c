#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	const char *y = format;
	char chr;
	int int1;
	float flt;
	char *str;
	char *separator = "";

	va_start(list, format);

	while (*y)
	{
		if (*y == 'c')
		{
			chr = va_arg(list, int);
			printf("%s%c", separator, chr);
		}
		else if (*y == 'i')
		{
			int1 = va_arg(list, int);
			printf("%s%d", separator, int1);
		}
		else if (*y == 'f')
		{
			flt = va_arg(list, double);
			printf("%s%f", separator, flt);
		}
		else if (*y == 's')
		{
			str = va_arg(list, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s%s", separator, str);
		}
		separator = ", ";
		y++;
	}
	va_end(list);
	printf("\n");
}
