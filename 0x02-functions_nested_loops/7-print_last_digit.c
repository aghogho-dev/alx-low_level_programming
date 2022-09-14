#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: param to check for last digit
 * Return: int
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
		a *= -1;

	_putchar(a + '0');

	return (a);
}
