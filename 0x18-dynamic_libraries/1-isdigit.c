#include "main.h"

/**
 * _isdigit - find if digit
 * @c: param
 * Return: 1 if true else false
 */

int _isdigit(int c)
{
	char a;
	int b;

	a = '0';
	b = 0;
	while (a <= '9')
	{
		if (a == c)
		{
			b = 1;
			break;
		}
		a++;
	}
	return (b);
}
