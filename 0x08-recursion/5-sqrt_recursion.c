#include "main.h"

/**
 * find_sqrt - find sqrt
 * @n: of n
 * @p: try this
 * Return: int
 */
int find_sqrt(int n, int*p)
{
	if (*p * *p == n)
	{
		return (*p);
	}
	else if (*p * *p < n)
	{
		*p = *p + 1;
		return (find_sqrt(n, p));
	}
	else
	{
		*p = -1;
		return (*p);
	}
}

/**
 * _sqrt_recursion - find sqrt
 * @n: find sqrt of n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int a = 2;
	int *p = &a;

	if (n == 1)
		return (1);
	if (n < 1)
		return (-1);
	find_sqrt(n, p);
	return (a);
}
