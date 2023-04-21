#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number of  parameters to pass
 * @...: the variable number of parameters
 *
 * Return: the sum of all function parameters
 *         0 if n equal zero
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list ap;

	sum = 0;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
