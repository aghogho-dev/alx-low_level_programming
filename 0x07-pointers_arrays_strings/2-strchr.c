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
	int i, j, k;
	char ar[100];
	char *ppt = NULL;

	j = 0;
	while (s[j] != '\0')
		j++;

	i = 0;
	while ((s[i] != c) && (i < j))
		i++;

	if (i != j)
	{
		for (k = i; k < j; k++)
			ar[k - i] = s[k];
		ppt = ar;
	}
	return (ppt);
}
