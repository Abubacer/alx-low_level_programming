#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * without using malloc, free or arrays
 * with a maximum of two variables
 * @head: the pointer to the head
 *
 * Return: the address of the node where the loop starts
 *         or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first;
	listint_t *last;

	first = head;
	last = head;

	if (head == 0)
		return (0);

	while (first && last && last->next)
	{
		last = last->next->next;
		first = first->next;

		if (last == first)
		{
			first = head;
			while (first != last)
			{
				first = first->next;
				last = last->next;
			}

			return (last);
		}
	}

	return (0);
}
