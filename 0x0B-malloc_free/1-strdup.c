#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - func
 * @str: str
 * Return: char * or NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + 1));

	j = 0;
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[i] = '\0';

	return (s);
}
