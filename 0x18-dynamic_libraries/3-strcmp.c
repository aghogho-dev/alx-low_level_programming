#include "main.h"

/**
 * _strcmp - compares two strs
 * @s1: first str
 * @s2: second str
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k, ans;

	ans = 0;
	i = 0;
	while (*(s1 + i) != '\0')
		i++;

	j = 0;
	while (*(s2 + j) != '\0')
		j++;

	if (i <= j)
	{
		for (k = 0; k < i; k++)
			if (s1[k] != s2[k])
			{
				ans = s1[k] - s2[k];
				break;
			}
	}
	else
	{
		for (k = 0; k < j; k++)
			if (s1[k] != s2[k])
			{
				ans = s1[k] - s2[k];
				break;
			}
	}
	return (ans);
}
