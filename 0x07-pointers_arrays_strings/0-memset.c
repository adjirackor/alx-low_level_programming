#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the block of memory to be filled
 * @b: the constant byte to be used to fill memory
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
