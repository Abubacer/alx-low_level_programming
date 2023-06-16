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
	dlistint_t *current_node = *head;
	unsigned int num_node = 0;

	if (head == 0 || *head == 0)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && num_node < index)
	{
		current_node = current_node->next;
		num_node++;
	}

	if (current_node == NULL)
		return (-1);
	if (current_node->prev != NULL)
		current_node->prev->next = current_node->next;

	if (current_node->next == NULL)
		current_node->next->prev = current_node->prev;

	free(current_node);

	return (1);
}
