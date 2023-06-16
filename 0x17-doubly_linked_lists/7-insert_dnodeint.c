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
	dlistint_t *new_node, *tmp_node;
	unsigned int current_idx = 0;

	new_node = malloc(sizeof(dlistint_t));
	tmp_node = *h;

	if (h == NULL)
		return (0);
	if (new_node == NULL)
		return (0);
	if (idx == 0)
	{
		if (*h != NULL)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	while (tmp_node != NULL && current_idx < idx - 1)
	{
		tmp_node = tmp_node->next;
		current_idx++;
	}
	if (tmp_node == NULL)
		return (0);

	new_node->n = n;
	new_node->prev = tmp_node;
	new_node->next = tmp_node->next;

	if (tmp_node->next != NULL)
		tmp_node->next->prev = new_node;

	tmp_node->next = new_node;

	return (new_node);
}
