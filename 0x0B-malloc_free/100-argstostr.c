#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concat args
 * @ac: num args
 * @av: args vec
 * Return: char **
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, m;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	k = ac;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			k++;
			j++;
		}
		i++;
	}

	s = malloc(sizeof(char) * (k + 1));

	if (s == NULL)
		return (NULL);

	m = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			s[m] = av[i][j];
			m++;
			j++;
		}
		i++;
		s[m] = '\n';
		m++;
	}

	s[k] = '\0';

	return (s);
}
