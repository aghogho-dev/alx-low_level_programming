#include "main.h"

/**
 * *cap_string - capitalize str
 * @s: str
 * Return: char *
 */

char *cap_string(char *s)
{
	int i, j, n;
	char sym[] =  {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	n = 0;
	while (sym[n] != '\0')
		n++;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z' && i == 0)
			s[i] = s[i] - 32;

		j = 0;
		while (j < n)
		{
			if (s[i] == sym[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
