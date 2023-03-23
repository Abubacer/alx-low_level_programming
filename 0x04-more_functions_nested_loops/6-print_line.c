#include "main.h"

/**
* print_line - a function that draws a straight line
* @n: The parameter
* Return: 0
*/

void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (l = 0 ; l < n ; l++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}

}
