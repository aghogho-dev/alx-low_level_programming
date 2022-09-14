#include "main.h"

/**
 * times_table - create 0 - 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j;

	i = 0;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			if (j != 9)
			{
				_putchar(i*j + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i*j + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
