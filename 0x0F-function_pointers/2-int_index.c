#include "function_pointers.h"

/**
 * int_index - a function that  searches for an integer
 * @array: the array of int
 * @size: the array size elements
 * @cmp: the pointer to the function that compare values
 *
 * Return: the int index
 * return -1 If no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == 0 || size <= 0 || cmp == 0)
		return (-1);

	for (index = 0 ; index < size ; index++)
	{
		if (cmp(array[index]))
			return (index);
	}

	return (-1);
}
