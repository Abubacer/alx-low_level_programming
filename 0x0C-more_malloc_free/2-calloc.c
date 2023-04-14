#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: the memory to fill
 * @c: the constant byte
 * @n: the bytes to copy
 * Return: a pointer to s
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = c;
	}

	return (s);
}


/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: elements in the array
 * @size: the size of each element
 * Return: a pointer to the allocated memory
 * NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (size == 0 || nmemb == 0)
		return (0);

	mem = malloc(size * nmemb);

	if (mem == 0)
		return (0);

	_memset(mem, 0, nmemb * size);

	return (mem);
}

