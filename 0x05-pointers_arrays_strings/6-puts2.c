#include "main.h"

/**
* puts2 - a function that prints every other character of a string
* starting with the first character followed by a new line.
* @str: The function parameter
* Return: 0
*/

void puts2(char *str)
{
	int c, i, x, y;

	x = 0;
	y = 0;

	for (c = 0 ; str[c] != '\0'; c++)
	{
		x++;
	}
		y = x - 1;
	for (i = 0 ; i <= y ; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
