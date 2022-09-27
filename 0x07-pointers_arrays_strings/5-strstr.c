#include "main.h"
#include <stddef.h>

/**
 * *_strstr - find frst occurence
 * @haystack: str
 * @needle: substr
 * Return: char * or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p = NULL;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (!needle[j])
		{
			p = (haystack + i);
			break;
		}
	}
	return (p);
}
