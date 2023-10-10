#include "search_algos.h"

/**
 * binary_recur_search - Searches for a value in a sorted array of integers.
 * using Binary search algorithm
 * We can assume that array will be sorted in ascending order.
 * @array: A pointer to the first element of the array to search in
 * @left: The left index of the subarray.
 * @right: The right index of the subarray.
 * @value: The value to search for in array.
 * Return: The first index where value is located.
 *         Or -1 If value is not present or if array is NULL.
 */
int binary_recur_search(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);

			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] == value)
		{
			if (mid > 0 && array[mid - 1] == value)
				return (binary_recur_search(array, left, mid, value));
			return (mid);
		}
		else if (array[mid] < value)
			return (binary_recur_search(array, mid + 1, right, value));
		else
			return (binary_recur_search(array, left, mid - 1, value));
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * using Binary search algorithm.
 * The basic binary search does not necessarily return the index of the first
 * value in the array if this value appears more than once in the array.
 * this function solve the problem.
 * We can assume that array will be sorted in ascending order.
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array.
 * @value: The value to search for in array.
 * Return: The first index where value is located.
 *         Or -1 If value is not present or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_recur_search(array, 0, size - 1, value));
}
