#include "main.h"

/**
* _strcat - a function that  concatenates two strings
* @src: The string to append
* @dest: The destination string
* Return: The resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, dlen, slen;

	dlen = 0;
	slen = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		dlen++;
	}
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		slen++;
	}
	for (i = 0 ; i <= slen ; i++)
	{
		dest[dlen + i] = src[i];
	}
	return (dest);
}
