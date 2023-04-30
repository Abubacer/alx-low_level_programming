#include "lists.h"

/**
 * print_listint - a function that prints
 * all the elements of a linked list
 * @h: the pointer to the head
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numb;

	numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numb++;
	}

	return (numb);
}
