#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 * of a doubly linked list.
 * @h: the pointer to the head of the list.
 *
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t num_nodes = 0;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		num_nodes++;
	}

	return (num_nodes);
}
