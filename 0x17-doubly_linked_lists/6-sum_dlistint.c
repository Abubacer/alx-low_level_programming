#include "lists.h"

/**
 * sum_dlistint - function that sums of all the data
 * of a doubly linked list.
 * @head: the head of the list.
 *
 * Return: returns the sum or NULL if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int data_sum = 0;

	if (current_node == NULL)
		return (0);

	while (current_node != NULL)
	{
		data_sum += current_node->n;
		current_node = current_node->next;
	}

	return (data_sum);
}
