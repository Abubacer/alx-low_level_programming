#include <stdio.h>

/**
* main - entry point
* this program prints t prints all possible combinations
* of three digit numbers
* the numbers separated by , followed by a space
* the numbers are printed in ascending order
* using putchar function
* Return: Always 0 (success)
*/

int main(void)
{
	int n, i, x;

	for (n = 0 ; n < 10 ; n++)
	{
	for (i = n + 1 ; i < 10 ; i++)
	{
	for (x = i + 1 ; x < 10 ; x++)
	{
	if (n != i && n != x)
	{
		putchar(n + '0');
		putchar(i + '0');
		putchar(x + '0');
	if (n == 7 && i == 8 && x == 9)
	continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
