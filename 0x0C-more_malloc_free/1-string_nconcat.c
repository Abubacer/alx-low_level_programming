#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: first string input
 * @s2: seconde string input
 * @n: number of bytes input
 * Return: a pointer to s1 in the newly allocated memory
 * NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, slen1, slen2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	slen1 = 0;

	while (s1[slen1] != '\0')
		slen1++;

	slen2 = 0;

	while (s2[slen2] != '\0')
		slen2++;

	str = malloc(slen1 + n + 1);

	if (str == 0)
	{
		return (0);
	}

	for (i = 0 ; s1[i] != '\0' ; i++)
		str[i] = s1[i];

	for (j = 0 ; j < n ; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
