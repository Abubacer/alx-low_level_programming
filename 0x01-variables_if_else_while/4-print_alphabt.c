#include <stdio.h>

/**
* main - entry point
* this program prints the alphabet in lowercase
* exept the letters q and e using putchar function
* Return: Always 0 (success)
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')

		putchar(alphabet);
	}
		putchar('\n');

	return (0);
}
