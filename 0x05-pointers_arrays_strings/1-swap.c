#include "main.h"

/**
 * swap_int - swap two integer values
 * @a: first int
 * @b: second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
