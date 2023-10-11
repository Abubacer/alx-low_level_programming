#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted list of integers.
 * Using the Jump search algorithm
 * We can assume that list will be sorted in ascending order.
 * @list: A pointer to the head of the list to search in.
 * @value: The value to search for in list.
 * Return: A pointer to the first node where value is located.
 *         Or NULL If value is not present or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *curnt = list;

	if (list == NULL)
		return (NULL);

	while (curnt->next && curnt->n < value)
	{
		prev = curnt;
		if (curnt->express)
			curnt = curnt->express;
		else
		{
			while (curnt->next)
				curnt = curnt->next;
		}
		if (curnt->next)
			printf("Value checked at index [%lu] = [%d]\n",
				curnt->index, curnt->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
		curnt->index);

	curnt = prev;

	while (curnt && curnt->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", curnt->index, curnt->n);
		if (curnt->next)
			curnt = curnt->next;
		else
			return (NULL);
	}
	if (curnt && curnt->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", curnt->index, curnt->n);
		return (curnt);
	}

	return (NULL);
}
