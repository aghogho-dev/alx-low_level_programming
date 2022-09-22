#include "main.h"

/**
 * *_strncat - join two strs to ptn n
 * @dest: concat to
 * @src: to be concatenated
 * @n: stop at
 * Return: char *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k, m, z;
	char np[100];

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;

	for (k = 0; k < i; k++)
		np[k] = dest[k];
	for (m = i; m < i + j; m++)
		np[m] = src[m - i];

	z = 0;
	if (n > j)
		n = j;

	while (z < i + n)
	{
		dest[z] = np[z];
		z++;
	}
	return (dest);
}
