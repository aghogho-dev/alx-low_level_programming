#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concat strs
 * @s1: str
 * @s2: str
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k, m;

	i = 0;
	while (s1 != NULL && s1[i])
		i++;
	j = 0;
	while (s2 != NULL && s2[j])
		j++;

	if (j != 0 && n < j)
		k = n;
	else if ((j != 0 && n >= j) || j == 0)
		k = j;

	s = malloc(sizeof(char) * (i + k + 1));
	if (s == NULL)
		return (NULL);

	m = 0;
	while (m < i)
	{
		s[m] = s1[m];
		m++;
	}
	while (m < i + k)
	{
		s[m] = s2[m - i];
		m++;
	}
	s[m] = '\0';
	return (s);
}
