#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: main string to be scanned
 * @accept: string containing list of characters to match in s
 * Return: number of bytes in s which consists of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if
				(accept[j] == s[i])
					break;
		}
		if (accept[j] != s[i])
			break;
		count++;
	}
	return (count);
}
