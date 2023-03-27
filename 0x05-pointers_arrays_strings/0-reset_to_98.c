#include "main.h"

/**
* reset_to_98 - a function that takes a pointer to an int
* and updates the value it points to
* @n: The int parameter
* Return: Always 0
*/

void reset_to_98(int *n)
{
	int *p = &*n;
	*p = 98;
}
