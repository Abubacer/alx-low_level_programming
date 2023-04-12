#include "main.h"

/**
 * **alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: a pointer to the 2D array
 * or Null if it fails
 */

int **alloc_grid(int width, int height)
{
	int **elemt, i, j;

	elemt = malloc(sizeof(*elemt) * height);

	if (width <= 0 || height <= 0 || elemt == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < height ; i++)
		{
			elemt[i] = malloc(sizeof(**elemt) * width);
			if (elemt[i] == 0)
			{
			while (i--)
				free(elemt[i]);
			free(elemt);
			return (0);
			}
			for (j = 0 ; j < width ; j++)
				elemt[i][j] = 0;
		}
	}

	return (elemt);
}
