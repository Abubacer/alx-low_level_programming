#include "main.h"

/**
* puts_half - a function that prints half of a string
* followed by a new line.
* @str: The function parameter
* Return: 0
*/

void puts_half(char *str)
{
	int c, x;

	x = 0;

	for (c = 0 ; str[c] != '\0' ; c++)
	{
		x++;
	}
	if ((x % 2) == 0)
	{
		for (c = x / 2 ; str[c] != '\0' ; c++)
		_putchar(str[c]);
		_putchar('\n');
	}
	else if ((x % 2) == 1)
	{
		for (c = (x - 1) / 2 ; str[c] != '\0' ; c++)
		_putchar(str[c]);
		_putchar('\n');
	}
}
