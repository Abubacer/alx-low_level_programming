#include "lists.h"

/**
 * listint_len - a function that returns
 * the number of elements in a linked list
 * @h: the pointer to the head
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t numb;

	numb = 0;

	while (h)
	{
		h = h->next;
		numb++;
	}

	return (numb);
}
