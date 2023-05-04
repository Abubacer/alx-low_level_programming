#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int
 * @b: the pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if
 *         one or more chars in b that is not 0 or 1
 *         b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decml_num;

	decml_num = 0;

	while (*b)
	{
		decml_num <<= 1;
		if (*b == '1')
		{
			decml_num += 1;
		}

		else if (*b != '0')
		{
			return (0);
		}

		++b;
	}

	return (decml_num);
}
