#include "main.h"


/**
 * *create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: the array size
 * @c: char to initialize
 *
 * Return: a pointer to the array or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	n = malloc(sizeof(char) * size);

	if (size == 0 || n == 0)
		return (0);

	for (i = 0 ; i < size; i++)
		n[i] = c;

	return (n);
}
