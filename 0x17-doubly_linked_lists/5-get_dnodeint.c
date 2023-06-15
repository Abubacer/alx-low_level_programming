#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a doubly linked list.
 * @head: pointer to a pointer to the head of the list.
 * @index: the index of the node, starting from 0.
 *
 * Return: the nth node, or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int num_node = 0;

	if (current_node == NULL)
		return (0);

	while (current_node != 0 && num_node < index)
	{
		current_node = current_node->next;
		num_node++;
	}

	return (current_node);

}
