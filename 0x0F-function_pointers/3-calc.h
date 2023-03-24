#ifndef CALC_H
#define CALC_H

/**
  * struct op_t - struct data type that has two elements
  * @s: pointer to array
  * @f: a function pointer
  *
  * Description: op struct stores a pointer to a string
  * and also a function pointer
  */
typedef struct op_t
{
	char *s;
	int (*f)(int, int);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
