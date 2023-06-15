#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position in a doubly linked list.
 * @h: the head of the list.
 * @idx: the index where the new node will be added
 * @n: the data to be added to the new node.
 *
 * Return: the address of the new node, or NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int current_idx = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (0);

	new_node->n = n;
	if (*h == 0 && idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	current_node = *h;
	while (current_node != NULL && current_idx < idx)
	{
		current_node = current_node->next;
		current_idx++;
	}
	if (current_node == NULL && current_idx < idx)
	{
		free(new_node);
		return (0);
	}
	new_node->prev = current_node->prev;
	new_node->next = current_node;
	if (current_node->prev != NULL)
		current_node->prev->next = new_node;
	current_node->prev = new_node;
	return (new_node);
}
