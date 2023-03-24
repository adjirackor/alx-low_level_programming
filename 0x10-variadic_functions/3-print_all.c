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
	if(*y)
	{
		while (*y)
		{
			switch (*y)
			{
				case  'c':
					chr = va_arg(list, int);
					printf("%s%c", separator, chr);
					break;
				case 'i':
					int1 = va_arg(list, int);
					printf("%s%d", separator, int1);
					break;
				case 'f':
					flt = va_arg(list, double);
					printf("%s%f", separator, flt);
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
