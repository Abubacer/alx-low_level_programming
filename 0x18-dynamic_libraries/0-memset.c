#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: The address of memory to be filled
 * @b: The input value
 * @n: The number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
