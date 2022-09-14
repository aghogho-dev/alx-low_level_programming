#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	long long int a, b, c, tmp;

	a = 1;
	b = 2;
	printf("%lld, ", a);
	printf("%lld, ", b);

	c = 2;
	while (c < 98)
	{
		tmp = b;
		b += a;
		a = tmp;

		if (c != 97)
			printf("%lld, ", b);
		else
			printf("%lld\n", b);
		c++;
	}
	return (0);
}
