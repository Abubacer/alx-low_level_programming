#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: the number to compute
 * @index: the index, starting from 0 of the bit to set
 *
 * Return: 1 on success
 *         or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* since 64 bits is the size of a common data type */
	if (index > 63)
		return (-1);

	return (!!(*n |= 1L << index));
}
