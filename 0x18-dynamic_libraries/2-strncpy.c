#include "main.h"

/**
* _strncpy - a function that copies string
* @src: The string to copy
* @dest: The destination string
* @n: The number of character
* Return: The resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
