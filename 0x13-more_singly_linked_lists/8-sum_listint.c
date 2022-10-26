#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - func
 * @head: param
 * Return: int
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		if (!head->n)
			sum += 0;
		else
			sum += head->n;

		head = head->next;
	}
	return (sum);
}
