#include "main.h"
#include <stdio.h>

/**
* main - entry pointi
* Fizz-Buzz - a program that prints the numbers form 1 to 100
* for multiples of 3 print Fizz instead of the number
* for the multiples of 5 print Buzz
* For numbers which are multiples of both 3 and 5 print FizzBuzz
* Return: 0
*/

int main(void)
{
	int n;

	for (n = 1 ; n <= 100 ; n++)
	{
	if (n % 15 == 0)
	{
		printf("FizzBuzz");
	}
	else if (n % 3 == 0)
	{
		printf("Fizz");
	}
	else if (n % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", n);
	}
	if (n != 100)
	{
		printf(" ");
	}
	}
	printf("\n");
	return (0);
}
