#include "main.h"

/**
 * reverse_array - rev array
 * @a: array to rev
 * @n: len of arr
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int arr[100];
	int j = n;
	int k = 0;

	while (j)
	{
		arr[j - 1] = a[k];
		j--;
		k++;
	}

	for (k = 0; k < n; k++)
		a[k] = arr[k];
}
