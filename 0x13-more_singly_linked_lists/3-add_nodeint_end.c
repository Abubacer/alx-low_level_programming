#include "lists.h"

/**
 * add_nodeint_end - a function that adds
 * a new node at the end of a linked list
 * @head: the double pointer to the head
 * @n: the new number to add
 *
 * Return: the address of the new element
 *              NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode_int;
	listint_t *tmp;

	newnode_int = malloc(sizeof(listint_t));
	tmp = *head;

	if (!newnode_int)
		return (NULL);

	newnode_int->n = n;
	newnode_int->next = NULL;

	if (*head == NULL)
	{
		*head = newnode_int;
		return (newnode_int);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
		tmp->next = newnode_int;

		return (newnode_int);
}
