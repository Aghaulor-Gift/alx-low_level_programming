#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 *              to a 2 dimensional array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 * Return: Pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}


	**array = malloc(height * sizeof(int *));
	
	if (array == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	array[i] = malloc(width * sizeof(int));
	if (array[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(array[j]);
	}
	free(array);
	return (NULL);
	}

	for (j = 0; j < width; j++)
	{
	array[i][j] = 0;
	}
	}

	return (array);
}
