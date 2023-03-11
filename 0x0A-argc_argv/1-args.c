#include <stdio.h>
/**
  * main - prints the number of arguments passed to it
  * @argc: number of arguments passed
  * @argv: array of arguments
  *
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
