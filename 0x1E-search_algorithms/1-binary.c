#include "search_algos.h"

/**
 * binary_search - Search array with binary search
 * @array: Pointer to the array
 * @size: Size of array
 * @value: Search for this
 *
 * Return: -1 or index
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
