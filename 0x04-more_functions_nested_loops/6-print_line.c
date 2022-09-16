#include "main.h"

/**
 * print_line - prints lines
 * @n: number of lines to print
 * Return: void
 */

void print_line(int n)
{
	int b;

	b = 0;
	while (b < n)
	{
		_putchar('-');
		b++;
	}
	_putchar('\n');
}
