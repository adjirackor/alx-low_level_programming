#ifndef DOG_H
#define DOG_H

/**
  * struct dog - structure to declare datatype of dog
  * @name: first member
  * @age: second member
  * @owner: third member
  *
  * Description: a structure for a new type for
  *  containing the elements; name, age and owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
