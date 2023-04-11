#include "search_algos.h"

/**
 * linear_search - Find an element using linear search
 * @array: Pointer to the array element
 * @size: Size of array
 * @value: Search for this
 *
 * Return: -1 or index
 */
int linear_search(int *array, size_t size, int value) {
	size_t i;
	if (array == NULL) {
		return (-1);
	}
	for (i = 0; i < size; i++) {
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value) {
			return (i);
		}
	}
	return (-1);
}
