#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	long int a, b, c, tmp;

	a = 1;
	b = 2;
	printf("%ld, ", a);
	printf("%ld, ", b);

	c = 2;
	while (c < 50)
	{
		tmp = b;
		b += a;
		a = tmp;

		if (c != 49)
			printf("%ld, ", b);
		else
			printf("%ld\n", b);
		c++;
	}
}
