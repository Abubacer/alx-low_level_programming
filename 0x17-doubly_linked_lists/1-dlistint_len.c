#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in
 * a doubly linked list.
 * @h: the pointer to the head of the list.
 *
 * Return: the number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t num_elements = 0;

	while (current_node != NULL)
	{
		num_elements++;
		current_node = current_node->next;
	}

	return (num_elements);
}
