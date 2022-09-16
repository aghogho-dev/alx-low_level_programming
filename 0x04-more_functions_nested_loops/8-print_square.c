#include "main.h"

/**
 * print_square - print squares
 * @size: square size param
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');

			if (b == (size - 1))
				_putchar('\n');
		}
	}
}
