#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - func
 * @ptr: param
 * @old_size: param
 * @new_size: param
 * Return: void *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *c;
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	else
	{
		if (!new_size)
		{
			free(ptr);
			return (NULL);
		}
		p = malloc(sizeof((char *)ptr) * new_size);
		if (p == NULL)
		{
			free(ptr);
			return (NULL);
		}
		c = ptr;
		s = p;
		for (i = 0; i < old_size && i < new_size; i++)
			s[i] = *c++;
		free(ptr);
		return (p);
	}
}
