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
	listint_t *nodeint;

	nodeint = *head;

	if (!head)
		return;

	while (nodeint)
	{
		tmp = nodeint;
		nodeint = nodeint->next;
		free(tmp);
	}

	*head = NULL;
}
