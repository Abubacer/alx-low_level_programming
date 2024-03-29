#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the number to compute
 * @index: the index, starting from 0 of the bit to get
 *
 * Return: the value of the bit at index
 *         or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* since 64 bits is the size of a common data type */
	if (index > 63)
		return (-1);

	return (n >> index & 1);
}
