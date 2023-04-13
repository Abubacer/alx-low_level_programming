#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * if malloc fails the function will cause normal process termination
 * with the value of 98
 * @b: int input
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == 0)
		exit(98);

	return (mem);
}
