#include "main.h"

/**
* rev_string - a function that prints a string, in reverse
* @s: The fuction parameter
* Return: 0
*/

void rev_string(char *s)
{
	int c;

	for (c = 9 ; c >= 0 ; c--)
	{
		_putchar(s[c]);
	}
}
