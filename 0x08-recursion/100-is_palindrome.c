#include "main.h"

/**
 * _strlen - get str len
 * @s: str
 * Return: int
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * is_palid - check for palindrome
 * @s: str
 * @d: strlen
 * @i: left index
 * @j: right index
 * Return: int
 */
int is_palid(char *s, int d, int i, int j)
{
	if (i <= 0 && j == d)
		return (1);

	if (d % 2 == 0)
	{
		if (s[i - 1] == s[j])
			return (is_palid(s, d, i - 1, j + 1));
		else
			return (0);
	}
	else
	{
		if (s[i] == s[j])
			return (is_palid(s, d, i - 1, j + 1));
		else
			return (0);
	}
}

/**
 * is_palindrome - put everything together
 * @s: str
 * Return: int
 */
int is_palindrome(char *s)
{
	int d;

	d = _strlen(s);

	return (is_palid(s, d, d / 2, d / 2));
}
