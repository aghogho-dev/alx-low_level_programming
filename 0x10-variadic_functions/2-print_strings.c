#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - func
 * @separator: param
 * @n: param
 * @...: parmas
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *s;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	va_start(p, n);

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(p, char*);

		if (separator && s)
			printf("%s%s", s, separator);
		else if (separator && !s)
			printf("%s%s", "(nil)", separator);
		else if (!separator && s)
			printf("%s", s);
		else
			printf("(nil)");
	}
	s = va_arg(p, char*);
	if (s)
		printf("%s\n", s);
	else
		printf("(nil)\n");
	va_end(p);
}
