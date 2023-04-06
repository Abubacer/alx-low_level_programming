#include "main.h"

int true_prime(int n, int x);

/**
* is_prime_number - a function that checks if the input
* integer is a prime number
* @n: The number to compute
* Return: 1 if the number is a prime, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)

	return (0);

	return (true_prime(n, n - 1));
}

/**
* true_prime- a function that checks if the input
* integer is a prime number
* @n: The number to compute
* @x: The int
* Return: 1 if the number is a prime, otherwise return 0
*/

int true_prime(int n, int x)
{
	if (x == 1)

	return (1);

	if (n % x == 0 && x > 0)

	return (0);

	return (true_prime(n, x - 1));
}
