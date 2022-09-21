#include "main.h"
#include <stdio.h>

/**
 * print_array - prints to pt n
 * @a: array
 * @n: end print at
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, j;

	j = 0;
	i = 0;
	if (n <= 0)
		printf("\n");

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);

		j++;
	}
}
