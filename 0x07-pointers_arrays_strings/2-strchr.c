#include "main.h"
#include <stdio.h>

/**
 * *_strchr - return first occurence of char
 * @s: str
 * @c: chr
 * Return: chr * or null
 */

char *_strchr(char *s, char c)
{
	int i, j;
	char *ptr = NULL;

	j = 0;
	while (s[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
		if (s[i] == c)
			ptr = s + i;

	return (ptr);
}
