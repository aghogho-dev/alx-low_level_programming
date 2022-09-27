#include "main.h"

/**
 * *_memset - fill memory with constant byte
 * @s: array
 * @b: constant byte
 * @n: size
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
