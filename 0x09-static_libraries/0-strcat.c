#include "main.h"

/**
 * *_strcat - concat strings
 * @dest: add to this string
 * @src: string to be added
 * Return: dest char*
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, m, z, v, w;
	char np[100];
	char nq[100];

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;

	v = 0;
	for (v = 0; v < j; v++)
		nq[v] = src[v];

	for (k = 0; k < i; k++)
		np[k] = dest[k];

	for (m = i; m < i + j; m++)
		np[m] = src[m - i];

	z = 0;
	while (np[z] != '\0')
	{
		dest[z] = np[z];
		z++;
	}

	for (w = 0; w < j; w++)
		src[w] = nq[w];

	return (dest);
}
