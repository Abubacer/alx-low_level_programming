#include "lists.h"

/**
 * print_list - a function that prints
 * all the elements of a linked list
 * @h: the pointer to the head
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t numb;

	numb = 0;

	while (h)
	{
		if (!h->str)
		printf("[0] (nil)\n");

		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numb++;
	}

	return (numb);
}
