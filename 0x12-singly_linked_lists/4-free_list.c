#include "lists.h"
#include <stdlib.h>

/**
 * free_list - func
 * @head: param
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
