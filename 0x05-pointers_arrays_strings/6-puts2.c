#include "main.h"

/**
 * lens - str len
 * @str: str
 * Return: int
 */

int lens(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * puts2 - print every other str
 * @str: str
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	i = lens(str);
	for (j = 0; j < i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
