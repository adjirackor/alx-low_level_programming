#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
  * _strdup - returns a copy of a given string parameter
  * @str: string to create duplicate
  *
  * Return: pointer to string
  */
char *_strdup(char *str)
{
	char *new_str;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	new_str = malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i++] = '\0';

	return (new_str);
}
/**
  * _strlen - returns length of a string
  * @s: the string to be checked
  *
  * Return: length of string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
