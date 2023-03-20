#include <stdio.h>

/**
* main - entry point
* this program prints all possible combinations
* of two-digit numbers
* the numbers separated by , followed by a space
* the numbers are printed in ascending order
* using putchar function
* Return: Always 0 (success)
*/

int main(void)
{
	int n, i;

	for (n = 0 ; n < 9 ; n++)
	{
	for (i = n + 1 ; i < 10 ; i++)
	{
		if (n != i)
		{
		putchar(n + '0');
		putchar(i + '0');
		if (n == 8 && i == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
