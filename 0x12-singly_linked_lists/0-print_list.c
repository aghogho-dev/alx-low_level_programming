#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - func
 * @h: param
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		
		h = h->next;
		n++;
	}
	return (n);
}
