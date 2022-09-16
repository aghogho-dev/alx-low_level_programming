#include "main.h"

/**
 * print_diagonal - print along diag
 * @n: param diag
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (b < a)
					_putchar(' ');
				if (b == a)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
