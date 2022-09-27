#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - find str
 * @s: str
 * @accept: substr
 * Return: char * or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				return ((s + i));
		}
		s++;
	}
	return (NULL);
}
