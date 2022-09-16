#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int a, n;

	n = 100;
	for (a = 1; a <= n; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);

		if (a < n)
			printf(" ");
		else if (a == n)
			printf("\n");
	}
	return (0);
}
