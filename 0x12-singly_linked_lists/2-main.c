#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	print_list(head);
	return (0);
}
