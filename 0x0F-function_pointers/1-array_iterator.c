#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - func
 * @array: param
 * @size: param
 * @action: param
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
