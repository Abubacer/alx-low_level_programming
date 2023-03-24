#include "main.h"

/**
* print_square - a function that prints a square
* @size: The parameter
* Return: 0
*/

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (x = 0 ; x < size ; x++)
		{
			for (y = 1 ; y < size ; y++)
			{
			_putchar(35);
			}
		_putchar(35);
		_putchar('\n');
		}
	}
}
