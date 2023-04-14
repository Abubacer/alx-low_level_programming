#include "main.h"

/**
 * *array_range - a function that creates an array of integers
 * @min: minimum range of int stored
 * @max: maximum rage of int stored
 * Return: a pointer to the newly created array
 * NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *p;
	int i, range;

	if (min > max)
		return (0);

	range = max - min + 1;

	p = malloc(sizeof(int) * range);

	if (p == 0)
		return (0);

	for (i = 0 ; i < range ; i++)
		p[i] = min++;

	return (p);
}
