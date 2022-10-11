#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - func
 * @d: struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
