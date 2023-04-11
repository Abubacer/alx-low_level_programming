#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int i, n, sum;
	int coins[] = {25, 10, 5, 2, 1};

	sum = 0;
	n = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	for (i = 0 ; i < 5 && n >= 0 ; i++)
	{
		while (n >= coins[i])
		{
		sum++;
		n -= coins[i];
		}
	}

	printf("%d\n", sum);
	return (0);
}
