#include "main.h"

/**
* print_diagonal - a function that draws a digonal line
* @n: The parameter
* Return: 0
*/

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (x = 0 ; x < n ; x++)
		{
			for (y = 1 ; y <= x ; y++)
			{
			_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
}
