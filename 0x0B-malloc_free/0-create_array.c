#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates arr
 * @size: size of arr
 * @c: char to initialize arr with
 * Return: char * or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (s == NULL || size == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	s[size] = '\0';

	return (s);
}
