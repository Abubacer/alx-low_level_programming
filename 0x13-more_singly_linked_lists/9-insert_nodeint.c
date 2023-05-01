#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position in a linked list
 * Index starts at 0
 * @head: the pointer to the head
 * @idx: the index where the new node should be added
 * @n: the data of the new node
 *
 * Return: the address of the new node
 *         or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode_int;
	listint_t *tmp;
	unsigned int i;

	tmp = *head;
	i = 0;

	newnode_int = malloc(sizeof(listint_t));

	if (newnode_int == NULL || head == NULL)
		return (NULL);

	newnode_int->n = n;
	newnode_int->next = NULL;

	if (idx == 0)
	{
		newnode_int->next = *head;
		*head = newnode_int;
		return (newnode_int);
	}

	while (tmp)
	{
		if (i == idx - 1)
		{
			newnode_int->next = tmp->next;
			tmp->next = newnode_int;
			return (newnode_int);
		}
		i++;
		tmp = tmp->next;
	}

	return (NULL);
}
