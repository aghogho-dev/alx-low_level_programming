#include "main.h"

/**
 * _strlen - calculate lenght of string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;

	return (i);
}
