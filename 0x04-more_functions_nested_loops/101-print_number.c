#include "main.h"

/**
 * print_number - prints number
 * @n: param
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		a = -1 * n;
		_putchar('-');
	}
	else
		a = n;
	if (a / 10)
		print_number(a / 10);
	_putchar((a % 10) + '0');
}
