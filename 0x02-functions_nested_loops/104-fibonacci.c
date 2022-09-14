#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a, b, c, tmp;

	a = 1;
	b = 2;
	printf("%lu, ", a);
	printf("%lu, ", b);

	c = 2;
	while (c < 98)
	{
		tmp = b;
		b += a;
		a = tmp;

		if (c != 97)
			printf("%lu, ", b);
		else
			printf("%lu\n", b);
		c++;
	}
	return (0);
}
