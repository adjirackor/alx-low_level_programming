#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string in which character will be located
 * @c: character to be located
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}
	return (0);
}
