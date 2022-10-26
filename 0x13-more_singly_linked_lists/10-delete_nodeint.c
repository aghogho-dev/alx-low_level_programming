#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - func
 * @head: param
 * @index: param
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *tmp;
	unsigned int i;

	if (!ptr)
		return (-1);

	if (!index)
	{
		(*head) = (*(*head)).next;
		free(ptr);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!(*ptr).next)
			return (-1);

		ptr = (*ptr).next;
	}
	tmp = (*ptr).next;
	(*ptr).next = (*tmp).next;
	free(tmp);
	return (1);
}
