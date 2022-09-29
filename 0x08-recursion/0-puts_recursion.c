#include "main.h"

/**
 * _puts_recursion - print recursively with putchar
 * @s: char arr
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (!s[i])
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	s++;
	_puts_recursion(s);
}
