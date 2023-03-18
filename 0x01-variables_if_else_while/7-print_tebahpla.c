#include <stdio.h>

/**
* main - entry point
* this program prints the lowercase alphabet in reverse
* using putchar function
* Return: Always 0 (success)
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
