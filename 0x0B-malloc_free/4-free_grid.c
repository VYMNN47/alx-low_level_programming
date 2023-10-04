#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: grid of memories
 * @height: int
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int e = 0;

	for (; e < height; e++)
		free(grid[e]);
	free(grid);
}

