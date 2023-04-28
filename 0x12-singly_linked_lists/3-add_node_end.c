#include "lists.h"

/**
 * add_node_end - a function that adds a new node
 * at the end of a linked list
 * @head: the double pointer to the head of the list
 * @str: the new string to add in the node
 *
 * Return: the address of the new element
 *         NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newhead;
	list_t *tmp;
	unsigned int sl;

	tmp = *head;
	sl = 0;

	while (str[sl])
	sl++;

	newhead = malloc(sizeof(list_t));

	if (newhead == 0)
		return (0);

	newhead->str = strdup(str);
	newhead->len = sl;
	newhead->next = NULL;

	if (*head == 0)
	{
		*head = newhead;
		return (newhead);
	}

	while (tmp->next)

	tmp = tmp->next;
	tmp->next = newhead;	
	return (newhead);
}
