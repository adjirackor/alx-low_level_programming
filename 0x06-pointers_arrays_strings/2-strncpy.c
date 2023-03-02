#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: length of source string
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
	{
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
