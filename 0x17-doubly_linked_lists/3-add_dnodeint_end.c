#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a doubly linked list.
 * @head: the head of the list.
 * @n: the data to be added to the new node.
 *
 * Return: the address of the new node, or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node;

	new_node = malloc(sizeof(dlistint_t));
	current_node = *head;

	if (new_node == NULL)
		return (0);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = new_node;
	new_node->prev = current_node;

	return (new_node);
}
