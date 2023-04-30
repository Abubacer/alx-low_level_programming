#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: the pointer to the head
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
