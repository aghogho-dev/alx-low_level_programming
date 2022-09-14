#include "main.h"

/**
 * if_one - check if condtions
 * @n: starting point
 * Return: void;
 */
void if_one(int n)
{
	if (n >= 100)
	{
		_putchar(((n / 10) / 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar('-');
		if (n <= -100)
		{
			_putchar(((-1 * n / 10) / 10) + '0');
			_putchar(((-1 * n / 10) % 10) + '0');
			_putchar((-1 * n % 10) + '0');
		}
		else if (n <= -10 && n > -100)
		{
			_putchar((-1 * n / 10) + '0');
			_putchar((-1 * n % 10) + '0');
		}
		else
		{
			_putchar((-1 * n % 10) + '0');
		}
	}
}

/**
 * if_two - check if conditions
 * @n: starting point
 * @k: ending point
 * Return: void
 */
void if_two(int n, int k)
{
	if (n != k)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * print_to_98 - print up to n
 * @n: starting point
 * Return: void
 */
void print_to_98(int  n)
{
	int k = 98;

	if (n > k)
	{
		while (n >= k)
		{
			if_one(n);
			if_two(n, k);
			n--;
		}
	}
	else
	{
		while (n <= k)
		{
			if_one(n);
			if_two(n, k);
			n++;
		}
	}
}
