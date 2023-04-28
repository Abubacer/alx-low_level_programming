#include "lists.h"

/**
 * list_len - a function that returns
 * the number of elements in a linked list
 * @h: the pointer to the head of the list_t
 *
 * Return: the number of elements in list_t
 */

size_t list_len(const list_t *h)
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
