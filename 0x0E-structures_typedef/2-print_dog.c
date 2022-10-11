#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print elems of struct
 * @d: struct pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!(*d).name)
		printf("Name: (nil)");
	else
		printf("Name: %s", (*d).name);
	printf("\n");

	if (!(*d).age)
		printf("Age: (nil)");
	else
		printf("Age: %.6f", (*d).age);
	printf("\n");

	if (!(*d).owner)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", (*d).owner);
	printf("\n");
}
