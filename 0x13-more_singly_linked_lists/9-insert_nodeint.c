#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - func
 * @head: param
 * @idx: param
 * @n: param
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *tmp = *head;
	unsigned int i;

	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	(*ptr).n = n;

	if (!idx)
	{
		(*ptr).next = tmp;
		(*head) = ptr;
		return (ptr);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (!tmp || !(*tmp).next)
			return (NULL);

		tmp = (*tmp).next;
	}
	(*ptr).next = (*tmp).next;
	(*tmp).next = ptr;
	return (ptr);
}
