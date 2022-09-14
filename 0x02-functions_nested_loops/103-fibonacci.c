#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a, b, tmp, sums;

	a = 1;
	b = 2;
	sums = 0;
	sums += b;

	while (b <= 4000000)
	{
		tmp = b;
		b += a;
		a = tmp;

		if (b % 2 == 0)
			sums += b;
	}
	printf("%lu\n", sums);
	return (0);
}
