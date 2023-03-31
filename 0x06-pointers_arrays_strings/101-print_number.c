#include "main.h"

/**
* print_number - a function that prints an integer
* @n: The number to print
* Return: 0
*/

void print_number(int n)
{
	int i;

	i = n;

	if (n < 0)
	{
		_putchar('_');
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
