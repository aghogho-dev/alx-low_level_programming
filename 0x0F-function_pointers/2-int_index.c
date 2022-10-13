#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - func
 * @array: param
 * @size: param
 * @cmp: param
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]))
			return (i);
	return (-1);
}
