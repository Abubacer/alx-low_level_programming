#include <stdio.h>

/**
* main - entry point
* this program prints all single digit numbers
* of base 10 starting from 0 using putchar function
* Return: Always 0 (success)
*/

int main(void)
{
	char num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}
		putchar('\n');

	return (0);
}
