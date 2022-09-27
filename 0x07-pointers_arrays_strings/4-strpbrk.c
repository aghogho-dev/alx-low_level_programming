#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - search str for set of bytes
 * @s: str
 * @accept: substr
 * Return: char * or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b, i, j;
	char *p;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				a = i;

			if (!b || a < b)
				b = a;
		}
	}
	if (b)
		p = (s + b);
	return (p);
}
