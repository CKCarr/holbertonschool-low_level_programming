#include "main.h"
/**
* alloc_grid - function that returns pointer to
* a 2dimensional array of integers
*
* @width: int array columns
* @height: int array rows
*
* Return: should function return NULL/return NULL
* if width or height is - or 0 /return NULL
* otherwise return pointer to 2dimension array.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int w_index, h_index;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (h_index = 0; h_index < height; h_index++)
	{
		grid[h_index] = malloc(sizeof(int) * width);
		if (grid[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
			{
				free(grid[h_index]);
			}
			free(grid);
			return (NULL);
		}
		for (w_index = 0; w_index < width; w_index++)
		{
			grid[h_index][w_index] = 0;
		}
	}
	return (grid);
}
