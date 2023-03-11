#include <stdio.h>
/**
  * main - prints all agrguments
  * @argc: number of arguments passed
  * @argv: array of arguments
  *
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
