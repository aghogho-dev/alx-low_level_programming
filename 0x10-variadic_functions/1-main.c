#include "variadic_functions.h"
#include <stdlib.h>

/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers(NULL, 4, 0, 1, 2, 3);
	print_numbers(", ", 0);
	return (0);
}
