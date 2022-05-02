#include<stdlib.h>
/**
 * ree_grid - function that frees a 2 dimensional grid previously created
 * @grid: array to free
 * @height: height of the array
 *
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
