#include "main.h"

/**
 * _strlen_recursion - get strlen recursively
 * @s: str
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
