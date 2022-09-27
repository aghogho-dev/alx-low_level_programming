#include "main.h"

/**
 * _strspn - find len of substr
 * @s: str
 * @accept: substr
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j, k;

	k = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (k);
}
