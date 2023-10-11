#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers.
 * Using the Jump search algorithm
 * We can assume that list will be sorted in ascending order.
 * @list: A pointer to the head of the list to search in.
 * @size: The number of NODES in list.
 * @value: The value to search for in list.
 * Return: A pointer to the first node where value is located.
 *         Or NULL If value is not present or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i;
	listint_t *curnt, *prev;

	curnt = list;
	prev = NULL;
	step = sqrt(size);

	if (list == NULL || size == 0)
		return (NULL);

	while (curnt->n < value && curnt->next)
	{
		prev = curnt;
		for (i = 0; curnt->next && i < step; i++)
			curnt = curnt->next;

		printf("Value checked array[%lu] = [%d]\n", curnt->index, curnt->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
		curnt->index);
	curnt = prev;
	while (curnt->n < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curnt->index, curnt->n);
		if (curnt->next)
			curnt = curnt->next;
		else
			return (NULL);
	}
	if (curnt->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", curnt->index,
			curnt->n);
		return (curnt);
	}
	return (NULL);
}
