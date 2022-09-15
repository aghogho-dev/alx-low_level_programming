#include "main.h"

/**
 * _isupper - get upper
 * @c: param
 * Return: 1 if upper otherwise 0
 */

int _isupper(int c)
{
	char a;
	int b;

	a = 'A';
	b = 0;

	while (a <= 'Z')
	{
		if (c == a)
		{
			b = 1;
			break;
		}
		a++;
	}

	return (b);
}
