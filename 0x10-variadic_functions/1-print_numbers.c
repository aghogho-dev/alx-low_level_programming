#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - func
 * @separator: param
 * @n: param
 * @...: params
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	va_start(p, n);

	for (i = 0; i < n - 1; i++)
	{
		if (separator)
			printf("%d%s", va_arg(p, int), separator);
		else
			printf("%d", va_arg(p, int));
	}
	printf("%d\n", va_arg(p, int));
	va_end(p);
}
