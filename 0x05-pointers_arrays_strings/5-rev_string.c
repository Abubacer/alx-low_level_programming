#include "main.h"

/**
* rev_string - a function that prints a string, in reverse
* @s: The fuction parameter
* Return: 0
*/

void rev_string(char *s)
{
	char r = s[0];
	int c, i;

	for (c = 0 ; s[c] != 0 ; c++)
	{
	}
	for (i = 0 ; i < c ; i++)
	{
		c--;
		r = s[i];
		s[i] = s[c];
		s[c] = r;
	}
}
