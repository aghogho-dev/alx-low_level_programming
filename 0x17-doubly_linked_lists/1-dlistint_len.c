#include "lists.h"

/**
 * dlistint_len - func
 * @h: param
 * Return: dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nd = 0;

	while (h)
	{
		nd++;
		h = h->next;
	}
	return (nd);
}
