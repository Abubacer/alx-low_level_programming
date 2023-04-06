#include "main.h"

int natural_sqrt_recursion(int n, int x);

/**
* _sqrt_recursion - a function that returns the natural square root of a number
* @n: The number to compute the sqrt of
* Return: The result  of sqrt
*/

int _sqrt_recursion(int n)
{
	if (n < 0)

	return (-1);

	return (natural_sqrt_recursion(n, 0));
}

/**
* natural_sqrt_recursion - a function that find natural square root of a number
* @n: The number to compute the sqrt of
* @x: square root
* Return: The result  of sqrt
*/

int natural_sqrt_recursion(int n, int x)
{
	if (x * x > n)

	return (-1);

	if (x * x == n)

	return (x);

	return (natural_sqrt_recursion(n, x + 1));
}
