#include "main.h"

/**
 * reverse_array - rev arr
 * @a: arr
 * @n: len of arr
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j, k;
	int arr[100];

	k = 0;
	j = n;
	while (j)
	{
		arr[j - 1] = a[k];
		j--;
		k++;
	}

	for (k = 0; k < n; k++)
		a[k] = arr[k];
}
