#include "main.h"

/**
 * len_str = get str len
 * @s: str
 * Return: int
 */
int len_str(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * rev_string = rev a str
 * @s: str
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, ln;
	char tmp;

	ln = len_str(s);
	j = ln - 1;
	i = 0;
	while (i < ln / 2)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}

