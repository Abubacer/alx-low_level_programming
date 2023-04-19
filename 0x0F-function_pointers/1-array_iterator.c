#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array
 * @array: the array of int
 * @size: the array size
 * @action: the pointer to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last;

	last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);
}
