#include "main.h"

/**
 * *_strcpy - copy string
 * @dest: buffer pointer
 * @src: str to cp
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}
