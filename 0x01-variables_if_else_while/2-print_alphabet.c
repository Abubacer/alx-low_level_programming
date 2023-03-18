#include <stdio.h>

/**
 * main - entry point
 * this program print the alphabet in lowercase
 * followed by a new line using only putchar function
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
