#include "function_pointers.h"
/**
  * print_name - function that prints a name
  * @name: pointer to array of characters
  * @f: pointer to a function
  *
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	if (!f)
		return;
	f(name);
}
