#include "3-calc.h"
#include <string.h>
/**
  * get_op_func - selects that correct function to perform operation
  * @s: operator passed as argument
  * Return: a pointer to the function that corresponds to operator given
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].s != NULL && (strcmp(ops[i].s, s) != 0))
		i++;

	return (ops[i].f);
}
