#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a doubly linked list.
 * @head: the pointer to the head of the list.
 * @n: the new element to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (0);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
