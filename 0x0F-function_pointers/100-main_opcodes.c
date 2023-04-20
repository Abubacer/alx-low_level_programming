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
	int i, numb;
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

	for (i = 0; i < numb ; i++)
	{
		if (i == numb - 1)
		{
		printf("%02hhx\n", elemt[i]);
		break;
		}
		printf("%02hhx", elemt[i]);
	}
	return (0);
}


