#include "main.h"
#include <stdlib.h>

/**
 * *array_range - func
 * @min: param
 * @max: param
 * Return: int *
 */
int *array_range(int min, int max)
{
	int i, j;
	int *s;

	if (min > max)
		return (NULL);

	i = max - min;

	s = malloc(sizeof(int) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
	{
		s[j] = min;
		min++;
	}
	return (s);
}
