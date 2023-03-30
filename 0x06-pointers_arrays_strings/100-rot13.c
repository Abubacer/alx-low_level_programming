#include "main.h"

/**
* rot13 - a function that encodes a string using rot13
* @s: The pointer
* Return: s
*/

char *rot13(char *s)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char srot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = srot[j];
				break;
			}
		}
	}

	return (s);
}
