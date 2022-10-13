#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - func
 * @n: param
 * @...: variable args
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum = 0;

	if (n == 0)
		return (sum);

	va_start(p, n);

	for (i = 0; i < n; i++)
		sum += va_arg(p, int);

	va_end(p);
	return (sum);
}
