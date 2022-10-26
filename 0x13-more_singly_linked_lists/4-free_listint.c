#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - func
 * @head: param
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = (*head).next;
		free(head);
		head = ptr;
	}
}
