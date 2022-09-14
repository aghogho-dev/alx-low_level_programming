#include "main.h"

/**
 * print_times_table - create 0 - n times table
 * @n: param times table
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 || n >= 0)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				k = i * j;
				if (j == 0)
				{
					_putchar(k + '0');
				}
				else
				{
					if (k < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
