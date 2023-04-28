#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at the beginning of a linked list
 * @head: the pointer adress of head node
 * @str: the new string to add in the node
 *
 * Return: the address of the new element
 *         NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;
	unsigned int sl;

	sl = 0;

	while (str[sl])
	sl++;

	newhead = malloc(sizeof(list_t));

	if (newhead == 0)
		return (0);

	newhead->str = strdup(str);
	newhead->len = sl;
	newhead->next = *head;
	*head = newhead;

	return (*head);
}
