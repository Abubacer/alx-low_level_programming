#include "main.h"

/**
* _strncat - a function that  concatenates two strings
* using at most n bytes from src
* @src: The string to append
* @dest: The destination string
* @n: The number of character to append
* Return: The resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
		dest[i] = '\0';

	return (dest);
}
