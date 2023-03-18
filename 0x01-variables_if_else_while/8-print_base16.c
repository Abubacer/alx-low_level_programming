#include <stdio.h>

/**
* main - entry point
* this program prints all numbers of base 16 in lowercase
* using putchar function
* Return: Always 0 (success)
*/

int main(void)
{
	int n;
	char lower;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	for (lower = 'a' ; lower <= 'f' ; lower++)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
