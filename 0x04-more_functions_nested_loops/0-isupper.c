#include "main.h"

/**
* _isupper - a function that checks for uppercase character
* @c: The character to be checked
* Return: 1 if is an uppercase, return 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
