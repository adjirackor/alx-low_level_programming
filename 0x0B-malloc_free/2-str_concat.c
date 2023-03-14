#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: pointer to newly allocated space in memory for new string
  */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len1;
	int len2;
	int total;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total = len1 + len2;
	new_str = malloc((total + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (i < total)
	{
		if (i <= len1)
			new_str[i] = s1[i];
		if (i >= len1)
		{
			new_str[i] = s2[j];
			j++;
		}
		i++;
	}

	new_str[i] = '\0';

	return (new_str);
}
/**
  * _strlen - function that returns len of str
  * @s: the string to be checked
  *
  * Return: an int value for len of string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
