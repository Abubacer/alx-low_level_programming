#include "main.h"

/**
* print_triangle - a function that prints a triangle
* @size: The parameter
* Return: 0
*/

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (x = 0 ; x < size ; x++)
		{
		for (y = size - x ; y > 1 ; y--)
		{
			_putchar(' ');
		}
		for (z = 0 ; z <= x ; z++)
		{
			_putchar(35);
		}
			_putchar('\n');
		}
	}
}

