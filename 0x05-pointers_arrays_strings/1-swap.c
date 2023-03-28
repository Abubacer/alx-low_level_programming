#include "main.h"

/**
* swap_int - a function that swaps the values of two integers
* @a: The first parameter
* @b: The seconde parameter
* Return: 0
*/

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
