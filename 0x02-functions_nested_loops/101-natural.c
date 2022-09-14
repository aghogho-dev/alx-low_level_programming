#include <stdio.h>

/**
 * main - sum natural numbers
 * Return: Always 0
 */
int main(void)
{
	long int a = 0; b = 0, j;

	for (j = 0; j < 1024; j++)
	{
		if ((j % 3) == 0)
			a += j;
		else if ((j % 5) == 0)
			b += j;
	}
	printf("%ld\n", a + b);

	return (0);
}
