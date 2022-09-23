#include "main.h"

/**
 * print_number - prints num
 * @n: num
 * Result: 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 10) / 10 + '0');
		_putchar((n / 10)% 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar(((n / 10) / 10) / 10 + '0');
		_putchar(((n / 10) / 10) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
