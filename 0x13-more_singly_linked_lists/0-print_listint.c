#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - func
 * @h: param
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", (*h).n);
		i++;
		h = (*h).next;
	}
	return (i);
}
