#include "main.h"

/**
* times_table - a function that prints the 9 times table
*
* Return: Always 0 (Success)
*/

void times_table(void)
{
	int i, j, n;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (j = 0 ; j <= 10 ; j++)
			n = i * j
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
	}
}
