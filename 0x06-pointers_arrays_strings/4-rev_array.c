#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers
 *
 * @a: an array of ints
 * @n: the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, g, h;

	for (i = 0, g = (n - 1); i < g; i++, g--)
	{
		h = a[i];
		a[i] = a[g];
		a[g] = h;
	}
}
