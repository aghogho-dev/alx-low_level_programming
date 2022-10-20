#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - func
 * @head: param
 * @str: param
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp = *head;
	size_t n;

	n = 0;
	while (str[n])
		n++;

	ptr = (list_t *)malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ptr;
	}
	return (ptr);
}
