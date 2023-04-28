#include "lists.h"

/**
 * free_list - a function that frees a linked list nodes
 * @head: the pointer to linked list to be freed
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == 0)
		return;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
