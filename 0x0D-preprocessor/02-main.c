#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled from
 * followed by new line
 * Return: 0 on Success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
