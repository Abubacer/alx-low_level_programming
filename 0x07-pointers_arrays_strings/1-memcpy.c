#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: The memory storage
 * @src: The memory to be copied
 * @n: The number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
