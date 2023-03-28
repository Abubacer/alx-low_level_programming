 #include "main.h"

/**
* print_rev - a function that prints a string
* in reverse followed by a new line
* @s: The string to be printed
* Return: 0
*/

void print_rev(char *s)
{
	int c, l;

	l = 0;

	for (c = 0 ; s[c] != '\0' ; c++)
	{
		l++;
	}
	for (c = l ; c >= 0 ; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
