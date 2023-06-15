#include "lists.h"

/**
 * free_dlistint - a function that frees all the elements
 * of a doubly linked list.
 * @head: the pointer to the head of the list.
 *
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node, *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
