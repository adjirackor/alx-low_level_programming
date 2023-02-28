/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*(s + x) != '\0')
	{
		x++;
	}
	return (x);
}
