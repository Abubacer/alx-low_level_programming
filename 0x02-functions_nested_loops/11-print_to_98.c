#include "main.h"
#include <stdio.h>

/**
* print_to_98 - a function that prints natural numbers
* @n: The function parameter
* Return: 1 if is an alphabetic, return 0 otherwise
*/

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
			printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
			printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i != 98)
			printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)

		printf("%d, ", n);
}
