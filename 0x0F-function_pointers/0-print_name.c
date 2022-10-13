#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - func that prints
 * @name: char array
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
