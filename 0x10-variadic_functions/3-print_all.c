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
	char *str;
	char *separator = "";

	va_start(list, format);
	if (*y)
	{
		while (*y)
		{
			switch (*y)
			{
				case  'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = ("(nil)");
					printf("%s%s", separator, str);
					break;
				default:
					y++;
					continue;
			}
			separator = ", ";
			y++;
		}
	}
	va_end(list);
	printf("\n");
}
