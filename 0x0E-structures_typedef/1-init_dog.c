#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initializes a variable of type struct dog
  * @d: pointer to struct dog
  * @name: pointer to string
  * @age: float value for age
  * @owner: pointer to string
  *
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		struct dog *p = d;

		(*p).name = name;
		(*p).age = age;
		(*p).owner = owner;
	}
}
