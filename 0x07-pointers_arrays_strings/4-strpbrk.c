#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be checked
 * @accept: string to be matched
 * Return: pointer to the character in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
	return ('\0');

}
