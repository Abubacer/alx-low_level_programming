#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * to flip to get from one number to another
 * without using the % or / operators
 * @n: the first number to compute
 * @m: the seconde number to compute
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x_val;
	int num;

	x_val = n ^ m;
	num = 0;

	while (x_val)
	{
		num++;
		x_val &= x_val - 1;
	}

	return (num);
}
