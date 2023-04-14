#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: the array element
 * @c: the constant byte
 * @n: the bytes to fill
 * Return: a pointer to s
 */

char *_memset(char *s, char c, unsigned int n)
{
	char *ptr;

	ptr = s;

	while (n--)
		*s++ = c;

	return (ptr);
}


/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: the array
 * @size: the size of each element
 * Return: a pointer to the allocated memory
 * NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (size == 0 || nmemb == 0)
		return (0);

	mem = malloc(sizeof(int) * nmemb);

	if (mem == 0)
		return (0);

	_memset(mem, 0, sizeof(int) * nmemb);

	return (mem);
}

