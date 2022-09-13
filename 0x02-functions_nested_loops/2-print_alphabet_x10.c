#include "main.h"

/**
 * print_alphabet_x10 - use nested while loop
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j;
	char c;

	j = 1;
	while (j <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c++);
		}
		_putchar('\n');

		j++;
	}
}
