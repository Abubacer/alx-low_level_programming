#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: the double pointer to the head
 *
 * Return: the head node’s data
 *         or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int numb;

	if (head == NULL || *head == NULL)
		return (0);

	numb = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (numb);
}
