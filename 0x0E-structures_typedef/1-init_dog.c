#include "dog.h"

/**
 * init_dog - func
 * @d: param
 * @name: param
 * @age: param
 * @owner: param
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
