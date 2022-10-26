#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *get_nodeint_at_index - func
 * @head: param
 * @index: param
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	while (n < index)
	{
		if (!head)
			return (NULL);

		head = (*head).next;
		n++;
	}
	return (head);
}
