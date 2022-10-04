#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concat 2 strs
 * @s1: str
 * @s2: str
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	k = 0;
	while (k < i)
	{
		s[k] = s1[k];
		k++;
	}
	while (k < i + j)
	{
		s[k] = s2[k - i];
		k++;
	}
	s[k] = '\0';

	return (s);
}
