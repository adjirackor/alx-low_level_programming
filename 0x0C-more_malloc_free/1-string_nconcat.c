#include <stdlib.h>

int _strlen(char *s);

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: n byte of s2 to concatenate
  *
  * Return: pointer to address of concatenate string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int slen1, slen2, stotal;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	slen1 = _strlen(s1);
	slen2 = _strlen(s2);

	if (n >= slen2)
	{
		stotal = slen1 + slen2;
	}
	else
	{
		stotal = slen1 + n;
	}

	concat_str = (char *)malloc(stotal + 1);

	if (concat_str == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (i < stotal)
	{
		if (i <= slen1)
			concat_str[i] = s1[i];
		if (i >= slen1)
		{
			concat_str[i] = s2[j];
			j++;
		}
		i++;
	}

	concat_str[i] = '\0';

	return (concat_str);
}

/**
  * _strlen - returns the length of a string
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
