#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - func
 * @nmemb: param
 * @size: param
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	s = p;

	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;

	return (s);
}
