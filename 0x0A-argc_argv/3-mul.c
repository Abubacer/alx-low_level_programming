#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that multiplies two numbers, followed by a new line
* @argc: argument count
* @argv: argument vector
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
