#include "main.h"

/**
* _strlen - a function that returns the length of a string
* @s: The string to be printed
* Return: lenght of the string
*/

int _strlen(char *s)
{
	int x, l;

	l = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		l++;
	}

	return (l);
}
