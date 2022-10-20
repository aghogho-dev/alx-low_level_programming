#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - func
 * @head: param
 * @str: param
 * Return: list_t*
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t n;
	list_t *ptr;

	n = 0;
	while (str[n])
		n++;

	ptr = (list_t *)malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = n;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
