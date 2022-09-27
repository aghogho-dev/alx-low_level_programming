#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locate first occurence of chr
 * @s: str
 * @c: chr
 * Return: chr *
 */
char *_strchr(char *s, char c)
{
	int i, j;
	char *p = NULL;

	j = 0;
	while (s[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
		if (s[i] == c)
		{
			p = (s + i);
			break;
		}
	return (p);
}
