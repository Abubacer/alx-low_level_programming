#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t linked list
 * this function can free lists with a loop
 * this function go though the list only once
 * this function sets the head to NULL
 * @h: the double pointer to the head
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t elemt;
	listint_t *tmp;
	int n;

	if (h == 0 || *h == 0)
		return (0);

	elemt = 0;

	while (*h)
	{
		n = *h - (*h)->next;
		if (n > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			elemt++;
		}
		else
		{
			free(*h);
			*h = 0;
			elemt++;
			break;
		}
	}

	*h = 0;
	return (elemt);
}
