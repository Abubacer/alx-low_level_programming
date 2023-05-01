#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * without using malloc, free or arrays
 * with only 1 loop and a maximum of two variables
 * @head: the double pointer to the head
 *
 * Return: the pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node;
	listint_t *next_node;

	prev_node = NULL;
	next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
