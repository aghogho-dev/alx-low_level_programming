#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print elems of struct
 * @d: struct pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", (*d).name);
	printf("\n");

	if ((*d).age < 0)
		printf("Age: (nil)");
	else
		printf("Age: %.6f", (*d).age);
	printf("\n");

	if ((*d).owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", (*d).owner);
	printf("\n");
}
