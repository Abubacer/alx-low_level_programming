#include "main.h"

/**
* _isdigit - a function that checks for a digit
* @c: The character to be checked
* Return: 1 if is a digit, return 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
