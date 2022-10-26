#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - func
 * @head: param
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int i;

	if (*head == NULL)
		return (0);

	i = (*(*head)).n;
	*head = (*(*head)).next;

	free(tmp);
	return (i);
}
