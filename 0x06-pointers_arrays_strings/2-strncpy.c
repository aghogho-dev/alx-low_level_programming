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

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
