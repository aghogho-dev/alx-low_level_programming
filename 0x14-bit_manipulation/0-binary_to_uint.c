#include "main.h"

/**
 * binary_to_uint - func
 * @b: param
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, p = 0;
	unsigned int k = 1, sum = 0;

	if (*b == '\0')
		return (0);

	i = 0;
	while (b[i])
		i++;

	if (i == 1 && b[0] == '0')
		return (0);

	if (i == 1 && b[0] == '1')
		return (1);

	for (j = 0; j < i; j++)
		if (b[j] == 'e')
			return (0);

	while(b[p])
	{
		if (b[p] == '1')
		{
			for (j = 0; j < i - 1; j++)
				k *= 2;
			sum += k;
			k = 1;
		}
		i--;
		p++;
	}
	return (sum);
}
