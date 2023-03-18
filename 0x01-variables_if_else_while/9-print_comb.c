#include <stdio.h>

/**
* main - entry point
* this program prints t prints all possible combinations
* of single-digit numbers
* the numbers separated by , followed by a space
* the numbers are printed in ascending order
* using putchar function
* Return: Always 0 (success)
*/

int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);

	if (n != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
