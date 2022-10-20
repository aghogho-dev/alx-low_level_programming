#include "lists.h"
#include <stdlib.h>

/**
 * list_len - func
 * @h: param
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
