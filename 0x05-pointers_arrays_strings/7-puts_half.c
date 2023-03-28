#include "main.h"

/**
* puts_half - a function that prints half of a string
* followed by a new line.
* @str: The function parameter
* Return: 0
*/

void puts_half(char *str)
{
	int c, x, n;

	x = 0;

	for (c = 0 ; str[c] != '\0' ; c++)
	{
		x++;
	}
	n = (x / 2);
	if ((x % 2) == 1)
	{
	n = ((x + 1) / 2);
	}
	for (c = n; str[c] != '\0' ; c++)
	{
		_putchar(str[c]);
	}
		_putchar('\n');
}
