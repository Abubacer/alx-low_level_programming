#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * This program will print whether the number
 * stored in the variable n is positive or negative
 * if the number is greater than 0 print n is positive
 * if the number is less then 0 print n is negative
 * else the number is 0 print n is zero
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/** this is my code **/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}

