#include <stdio.h>

/**
 * main - entry point
 * body - magic
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;
	int iter;
	int tmp;

	first = 0;
	second = 1;

	while (1)
	{
		iter = 10 - second;
		tmp = second;

		while (iter)
		{
			putchar(first + '0');
			putchar(tmp++ + '0');

			if (first != 8)
			{
				putchar(',');
				putchar(' ');
			}

			iter--;

			if (iter == 0)
			{
				first = second;
				second += 1;
			}
		}

		if (second == 10)
		{
			putchar('\n');
			break;
		}
	}

	return (0);
}
