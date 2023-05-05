#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int number;
	char *p;

	number = 1;
	p = (char *) &number;

	return ((int) p[0]);
}
