#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: 0 (success) or -1 (error)
  */
int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);

		return (0);
	}
	printf("Error\n");
	return (1);
}
