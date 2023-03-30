#include "main.h"

/**
* reverse_array - a function that reverses the content of an array of integers
* @a: The array of integers
* @n: The number of elements of the array
* Return: 0
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0 ; i < n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
