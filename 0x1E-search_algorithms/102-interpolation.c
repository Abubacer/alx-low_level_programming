#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers.
 * Using the Interpolation search algorithm.
 * We can assume that array will be sorted in ascending order.
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array.
 * @value: The value to search for in array.
 * Return: The first index where value is located.
 *         Or -1 If value is not present or if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, p;

	low = 0;
	high = size - 1; /* init high to the last valid index. */

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		/* determine the probe position using interpolation formula */
		p = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (p >= size)
		{
			printf("Value checked array[%lu] is out of range\n", p);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", p, array[p]);

		if (array[p] == value)
			return (p);
		else if (array[p] < value)
			low = p + 1;
		else
			high = p - 1;
	}

	return (-1);
}
