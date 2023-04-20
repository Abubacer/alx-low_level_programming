#include "3-calc.h"

/**
 * main - a function that print the result of operations
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int (*result)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	result = get_op_func(argv[2]);
	b = atoi(argv[3]);

	if (!result)
	{
		printf("Error\n");
		exit(99);
	}

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", result(a, b));

	return (0);
}
