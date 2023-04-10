#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int sum;
	char *s;

	sum = 0;

	while (--argc)
	{
		for (s = argv[argc]; *s ; s++)

			if (*s < '0' || *s > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
