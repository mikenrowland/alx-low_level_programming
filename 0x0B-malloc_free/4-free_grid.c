#include "main.h"
#include "stdlib.h"

/**
 * free_grid - function entry point
 * @grid: address of 2D arr
 * @height: height of arr
 * Desc: frees a 2 dimensional grid previously
 * created by alloc_grid function.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	x = 0;
	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
