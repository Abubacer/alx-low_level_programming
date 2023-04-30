#include "lists.h"

/**
 * add_nodeint - a function adds
 * a new node at the beginning of a linked list
 * @head: the double pointer to the head
 * @n: the new number to add
 *
 * Return: the address of the new element
 *              NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode_int;

	newnode_int = malloc(sizeof(listint_t));

	if (!newnode_int)
		return (NULL);

	newnode_int->n = n;
	newnode_int->next = *head;
	*head = newnode_int;

	return (*head);
}
