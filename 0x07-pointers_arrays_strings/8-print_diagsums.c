#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: arr of type int
 * @size: the size of the arr
*/

void print_diagsums(int *a, int size)
{
	int ert, v = 0, c = 0;

	for (ert = 0; ert < size; ert++)
	{
		v = v + a[ert];
		c = c + a[size - ert - 1];
		a = a + size;
	}
	printf("%d, ", v);
	printf("%d\n", c);
}
