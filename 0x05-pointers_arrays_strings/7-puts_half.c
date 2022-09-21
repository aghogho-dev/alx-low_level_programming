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
 * puts_half - print half str
 * @str: str
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	i = lens(str);
	for (j = i / 2; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
