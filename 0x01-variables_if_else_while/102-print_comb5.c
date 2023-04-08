#include <stdio.h>

/**
* main - entry point
* this program all possible combinations
* of two two digit numbers
* the numbers separated by , followed by a space
* the numbers are printed in ascending order
* using putchar function
* Return: Always 0 (success)
*/

int main(void)
{
	int n, i, x, y;

	for (n = 0 ; n < 9 ; n++)
	{
	for (i = n + 1 ; i < 9 ; i++)
	{
	if (n != i)
	{
		putchar(n + '0');
		putchar(i + '0');
		putchar(' ');
	for (x = 0 ; x < 9 ; x++)
	{
	for (y = n + 1 ; y < 9 ; y++)
	{
	if (x != y)
	{
		putchar(x + '0');
		putchar(y + '0');
	if (n == 9 && i == 8 && x == 9 && y == 9)
	continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
