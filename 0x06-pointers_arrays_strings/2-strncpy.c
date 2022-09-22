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
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
