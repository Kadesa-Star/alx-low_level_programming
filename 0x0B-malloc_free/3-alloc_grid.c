#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dim array of int
 * @width: the width
 * @height: the height
 * Description: the funtion that returns a pointer to a 2 dim array of integers
 * Return: Null on failure
 */
int **alloc_grid(int width, int height)
{
	int k, l;
	int **grid;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(width * sizeof(int));
		if (grid[k] == NULL)
		{
			for (k--; k >= 0; k--)
			free(grid);
			free(grid[k]);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			grid[k][l] = 0;
	}
	return (grid);
}
