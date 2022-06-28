#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gr;
	int i, j;
	
	if (width < 1 || height < 1)
		return (NULL);

	gr = malloc(height * sizeof(int *));
	if (gr == NULL)
	{
		free(gr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gr[i] = malloc(width * sizeof(int));
		if (gr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gr[i]);
			free(gr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gr[i][j] = 0;
	return (gr);
}
