#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - func
 * @name: param
 * @f: param
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
