#include "main.h"

/**
 * array_range - a function that creates an array of integers
 *
 * @min: starting int
 * @max: max int
 *
 * Return: array of ints
*/

int *array_range(int min, int max)
{
	int *p;
	int ert, x;

	if (min > max)
		return (NULL);
	ert = max - min + 1;
	p = malloc(sizeof(int) * ert);
	if (!p)
		return (NULL);
	for (x = 0; x < ert; x++)
		p[x] = min++;
	return (p);
}


