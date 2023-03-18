#include <stdio.h>

/**
* main - entry point
* this program prints all single digit numbers
* of base 10 starting from 0 without any variable of type char
* using putchar function
* Return: Always 0 (success)
*/

int main(void)
{

	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar('0' + n);
	}

	putchar('\n');

	return (0);
}
