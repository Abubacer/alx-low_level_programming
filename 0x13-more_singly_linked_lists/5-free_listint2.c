#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: the double pointer to the head
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
