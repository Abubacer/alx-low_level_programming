#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * this program will print the last digit of
 * the number stored in the variable n
 * the output will be like this:
 * the last digit of n is n and is greater than 5
 * the last digit of n is n and is less than 6 and not 0
 * the last digit of n is 0 and is 0
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*this is my code*/
	last_digit = n % 10;
	if (last_digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n",
		n, last_digit);
	}
	else if (last_digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n",
		n, last_digit);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, last_digit);
	}
	return (0);
}
