#include "main.h"

/**
 * *_strdup - a function that returns a pointer to
 * a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: char
 * Return: a pointer to the duplicated string
 * null if insuffiecient memory.
 */

char *_strdup(char *str)
{
	char *dstr;
	int i, j;

	if (str == 0)
		return (0);

	for (i = 0 ; str[i] != '\0' ; i++)

	dstr = malloc(sizeof(char) * (i + 1));

	if (dstr == 0)
		return (0);

	for (j = 0 ; str[j] ; j++)
		dstr[j] = str[j];

	return (dstr);
}
