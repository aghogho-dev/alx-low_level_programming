#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid(int width, int height)
 * @width: param
 * @height: param
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			free(p[i]);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
