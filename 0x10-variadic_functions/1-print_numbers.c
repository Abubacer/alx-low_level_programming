#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers separeted
 * followed by a new line
 * @separator: the string to print between numbers
 * @n: the numbers to be passed
 * @...: the numbers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbs;

	va_start(numbs, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(numbs, int));

		if (i != (n - 1) && separator != 0)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbs);
}
