#include "main.h"

/**
 * print_most_numbers - do not print 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		if (a == 2 || a == 4)
		{
			a++;
			continue;
		}
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
