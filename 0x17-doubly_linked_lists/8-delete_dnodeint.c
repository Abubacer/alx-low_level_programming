#include "lists.h"

/**
 * delete_dnodeint_at_index - a function deletes the node at index
 * of a doubly linked list.
 * @head: the head of the list.
 * @index: the index where the new node will be deleted
 *
 * Return: 1 on success, or -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head, *next_node, *tmp;
	unsigned int num_node = 0;

	if (head == 0 || *head == 0)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (current_node != NULL && num_node < index - 1)
	{
		current_node = current_node->next;
		num_node++;
	}

	if (current_node == NULL || current_node->next == NULL)
		return (-1);
	next_node = current_node->next;
	current_node->next = next_node->next;

	if (next_node->next == NULL)
		next_node->next->prev = current_node;

	free(next_node);

	return (1);
}
