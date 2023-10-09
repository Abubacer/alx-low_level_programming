#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers.
 * Using the Jump search algorithm
 * We can assume that array will be sorted in ascending order.
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array.
 * @value: The value to search for in array.
 * Return: The first index where value is located.
 *         Or -1 If value is not present or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t next, current, start;

	current = 0;
	start = 0;
	next = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		current += next;
	}

	start = current - next;

	printf("Value found between indexes [%lu] and [%lu]\n", start, current);
	if (current >= size)
		current = size - 1;

	while (start <= current)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);

		start++;
	}

	return (-1);
}
