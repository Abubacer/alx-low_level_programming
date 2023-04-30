#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a linked list
 * where index is the index of the node starting at 0
 * @head: the pointer to the head
 * @index: the node index to return
 * Return: the nth node
 *         or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int numb;

	tmp = head;
	numb = 0;

	while (tmp && numb < index)
	{
		tmp = tmp->next;
		numb++;
	}

	return (tmp ? tmp : NULL);
}
