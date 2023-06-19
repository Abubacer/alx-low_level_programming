#include "main.h"

/**
* _strcpy - a function that copies the string pointed to by src
* including the terminating null byte, to the buffer pointed to by dest
* @dest: The buffer pointer
* @src: The string pointer
* Return: The pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i, s;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
	}
	for (s = 0 ; s < i ; s++)
	{
		dest[s] = src[s];
	}
		dest[i] = '\0';
	return (dest);
}
