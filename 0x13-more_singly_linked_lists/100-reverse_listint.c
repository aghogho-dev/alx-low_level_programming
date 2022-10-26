#include "lists.h"
#include <stdlib.h>

/**
 * *reverse_listint - func
 * @head: param
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *f, *b;

	if (!head || !(*head))
		return (NULL);

	b = NULL;

	while ((*(*head)).next)
	{
		f = (*(*head)).next;
		(*(*head)).next = b;
		b = (*head);
		(*head) = f;
	}
	(*(*head)).next = b;
	return (*head);
}
