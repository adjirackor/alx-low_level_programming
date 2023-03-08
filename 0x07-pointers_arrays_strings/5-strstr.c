#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be checked
 * @needle: substring to be located
 * Return: pointer to the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x_haystack = haystack;
		char *y_needle = needle;

		while (*x_haystack == *y_needle && *y_needle != '\0')
		{
			x_haystack++;
			y_needle++;
		}
		if (*y_needle == '\0')
			return (haystack);
	}

	return (NULL);
}
