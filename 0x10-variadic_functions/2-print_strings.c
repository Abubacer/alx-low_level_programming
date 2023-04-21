#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings separately
 * followed by a new line
 * @separator: the string separator to print between strings
 * @n: the number of arguments
 * @...: the strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list str;

	va_start(str, n);

	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(str, char*);

		if (s == 0)
			printf("(nil)");

		else
			printf("%s", s);

		if (i != (n - 1) && separator != 0)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
