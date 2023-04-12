#include "main.h"

/**
 * *str_concat - a function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: the concatenated string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *cstr;
	int i, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	cstr = malloc(sizeof(char) * (i + j + 1));

	if (cstr == 0)
		return (0);

	i = j = 0;
	while (s1[i] != '\0')
	{
		cstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		cstr[i] = s2[j];
		i++, j++;
	}

	cstr[i] = '\0';
	return (cstr);
}
