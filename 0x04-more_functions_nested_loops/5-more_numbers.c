#include "main.h"

/**
* more_numbers - a function that prints 10x the numbers
* from 0 to 14
* Return: 0
*/

void more_numbers(void)
{
	int x, n;

	for (x = 0 ; x < 10 ; x++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n > 9)
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
