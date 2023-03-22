#include "main.h"

/**
* print_last_digit - a function that prints the last digit of a number,
* @n: The number to be computed
* Return: the value of the last digits
*/

int print_last_digit(int n)

{
	int l;

	l = n % 10;
	if (l < 0)
	{
	l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}


