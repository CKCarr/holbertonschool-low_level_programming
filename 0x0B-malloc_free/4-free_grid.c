#include "main.h"
/**
* free_grid - function that frees 2dimensional grid
* previously created.
*
* @grid: grid created previously.
* @height: size of grid by rows.
*
* Return: void, 0 is success.
*
*/
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid);
	}
	free(grid);
}
