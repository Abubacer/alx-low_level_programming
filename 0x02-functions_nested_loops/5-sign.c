#include "main.h"

/**
* print_sign - a function that prints the sign of a number,
* @n: The number to be checked
* Return: 1 if n is greater than 0, return 0 if n is 0,
* return -1 if n is less than 0
*/

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
