#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - func
 * @h: param
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = (*h).next;
	}
	return (i);
}
