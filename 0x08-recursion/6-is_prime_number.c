#include "main.h"

/**
 * is_prime_number - get primes
 * @n: num
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	if (!(n % 5) || !(n % 7) || !(n % 11))
		return (0);

	if (!((n - 1) % 6))
		return (1);

	if (!((n + 1) % 6))
		return (1);

	return (0);
}
