#include "main.h"

/**
* _isalpha - a function that checks for alphabetic character,
* @c: The character to be checked
* Return: 1 if is an alphabetic, return 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else if (c >= 97 && c <= 122)
	{
	return (1);
	}

	return (0);
}
