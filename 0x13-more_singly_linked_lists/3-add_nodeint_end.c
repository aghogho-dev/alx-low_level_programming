#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_nodeint_end - func
 * @head: param
 * @n: param
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp = *head;

	ptr = (listint_t *)malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	(*ptr).n = n;
	(*ptr).next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		while ((*tmp).next != NULL)
			tmp = (*tmp).next;
		(*tmp).next = ptr;
	}
	return (ptr);
}
