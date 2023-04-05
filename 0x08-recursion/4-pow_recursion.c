#include "main.h"

/**
* _pow_recursion - a function that returns the value of an integer
* raised to the power of another integer
* @x: The value to raise
* @y: The power
* Return: The power result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)

	return (-1);

	if (y == 0)

	return (1);

	return (x * _pow_recursion(x, y - 1));
}
