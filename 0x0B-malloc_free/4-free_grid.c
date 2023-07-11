#include "main.h"

/**
 * free_grid - main func
 * @grid: int pointer of a pointer
 * @height: int var
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
