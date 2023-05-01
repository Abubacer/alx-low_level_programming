#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a linked list
 * Index starts at 0
 * @head: the pointer to the head
 * @index: the index of the node that should be deleted
 *
 * Return: 1 on success
 *         or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *current;
	unsigned int i;

	tmp = *head;
	current = NULL;
	i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (tmp == NULL || (tmp->next) == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}

	current = tmp->next;
	tmp->next = current->next;
	free(current);
	return (1);
}
