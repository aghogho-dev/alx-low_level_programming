#include "search_algos.h"

/**
 * jump_search - Search the sorted array with jumpy search
 * @array: Pointer to the array element
 * @size: Size of the array
 * @value: Search for this
 *
 * Return: -1 or index
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step, prev, jump;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	jump_step = sqrt(size);
	prev = 0;
	jump = 0;

	for (prev = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += jump_step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; prev < jump && array[prev] < value; prev++)
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	return (array[prev] == value ? (int)prev : -1);
}
