#include "main.h"

/**
 * strlens - get str length
 * @s: str
 * Return: int
 */
int strlens(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
 * print_rev - print string in reverse
 * @s: str
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = strlens(s);
	while (i > 0)
		_putchar(s[-1 + i--]);
	_putchar('\n');
}
