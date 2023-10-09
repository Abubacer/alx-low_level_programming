#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers.
 * Using the Binary search algorithm
 * We can assume that array will be sorted in ascending order.
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array.
 * @value: The value to search for in array.
 * Return: The first index where value is located.
 *         Or -1 If value is not present or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left_ptr, right_ptr, mid;
	size_t i;

	left_ptr = 0;
	right_ptr = size - 1;

	if (array == NULL)
		return (-1);

	while (left_ptr <= right_ptr)
	{
		mid = left_ptr + (right_ptr - left_ptr) / 2;
		printf("Searching in array: %d", array[left_ptr]);
		for (i = left_ptr + 1; i <= right_ptr; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left_ptr = mid + 1;

		else
			right_ptr = mid - 1;
	}
	return (-1);
}
