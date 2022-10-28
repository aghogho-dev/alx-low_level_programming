#include "main.h"

/**
 * get_endianness - func
 * Return: int
 */
int get_endianness(void)
{
	int i = 1;
	char *s = (char *)&i;

	if (*s == 1)
		return (1);
	return (0);
}
