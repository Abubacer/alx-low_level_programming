#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the number to print in binary representation
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int int_bit, printed_int;

	int_bit = sizeof(n) * 8;
	printed_int = 0;

	while (int_bit)
	{
		if (n & 1L << --int_bit)
		{
			_putchar('1');
			printed_int++;
		}
		else if (printed_int)
		{
			_putchar('0');
		}
	}
	if (!printed_int)
		_putchar('0');
}
