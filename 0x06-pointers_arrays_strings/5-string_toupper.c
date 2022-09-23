#include "main.h"

/**
 * *string_toupper - convert lowercase to uppercase
 * @s: str
 * Return: *s
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}