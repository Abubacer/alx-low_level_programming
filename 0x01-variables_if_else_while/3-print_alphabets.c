#include <stdio.h>

/**
 * main - entry point
 * this program prints the alphabet in lowercase
 * and then in uppercase using putchar function.
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet, alphabet_upp;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet_upp = 'A' ; alphabet_upp <= 'Z' ; alphabet_upp++)
	{
		putchar(alphabet_upp);
	}
	putchar('\n');

	return (0);
}

