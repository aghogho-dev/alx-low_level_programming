#include "main.h"

/**
 * _strncpy - copy strn to ptn n
 * @dest: copy str to
 * @src: copy from
 * @n: copy to ptn
 * Return: char *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (src[j] != '\0')
		j++;
	
	for (i = 0; src[i] && (i < n); i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
