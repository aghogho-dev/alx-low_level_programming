#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals
 * @a: matrix elongated
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;

	j = 0;
	k = 0;
	for (i = 0; i < size; i++)
	{
		j += a[i * (size + 1)];
		k += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", j, k);
}
