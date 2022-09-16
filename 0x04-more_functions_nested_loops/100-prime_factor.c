#include <math.h>
#include <stdio.h>

/**
 * main - find primes
 * Return: 0
 */
int main(void)
{
	unsigned long int a, b, c, n, max;

	n = 612852475143;
	max = 2;
	c = 1;

	for (a = 2; a < sqrt(n) * 500; a++)
	{
		if ((n % a) == 0)
		{
			for (b = 2; b < a; b++)
				if ((a % b) == 0)
				{
					c = 0;
					break;
				}
			if (c == 1)
			{
				if (a > max)
					max = a;
			}
			else
			{
				c = 1;
			}
		}
	}
	printf("%lu\n", max);
	return (0);
}

