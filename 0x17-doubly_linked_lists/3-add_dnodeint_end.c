#include "lists.h"

/**
 * add_dnodeint_end- func
 * @head: param
 * @n: param
 * Return: NULL or ptr
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr1, *ptr2;

	ptr1 = malloc(sizeof(dlistint_t));
	if (ptr1 == NULL)
		return (NULL);

	ptr1->n = n;
	ptr1->next = NULL;

	if (*head == NULL)
	{
		ptr1->prev = NULL;
		*head = ptr1;
		return (ptr1);
	}
	ptr2 = *head;
	while (ptr2->next != NULL)
		ptr2 = ptr2->next;

	ptr2->next = ptr1;
	ptr1->prev = ptr2;

	return (ptr1);
}
