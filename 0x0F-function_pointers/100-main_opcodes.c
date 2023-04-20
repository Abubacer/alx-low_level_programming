#include "function_pointers.h"

/**
 * main - a function that print its own opcodes
 * in hexadecimal, lowercase, two char long
 * listing ends with anew line
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int numb;
	char *elemt;

	elemt = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numb = atoi(argv[1]);

	if (numb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (numb--)
		printf("%02hhx%s", *elemt++, numb ? " " : "\n");
	return (0);
}


