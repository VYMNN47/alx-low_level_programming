#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: 2d array
*/

int **alloc_grid(int width, int height)
{
	int **ert, e, r;
	ert = malloc(sizeof(*ert) * height);

	if (width <= 0 || height <= 0 || **ert == 0)
	{
		return (NULL);
	}
	else
	{
		for (e = 0; e < height; e++)
		{
			ert[e] = malloc(sizeof(**ert) * width);
			if (ert[e] == 0)
			{
				while (e--)
					free(ert[e]);
				free(ert);
				return (NULL);
			}

			for (r = 0; r < width; r++)
				ert[e][r] = 0;
		}
	}
	return (ert);
}
