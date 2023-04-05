#include "main.h"

/**
* _strlen_recursion - a function that returns the length of a string
* @s: The string to be computed
* Return: The string length
*/

int _strlen_recursion(char *s)
{
	int x;

	x = 0;

	if (*s != '\0')
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
		return (x);
}
