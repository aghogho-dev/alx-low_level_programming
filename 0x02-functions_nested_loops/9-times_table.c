#include "main.h"

/**
 * times_table - create 0 - 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (k < 10)
				_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
