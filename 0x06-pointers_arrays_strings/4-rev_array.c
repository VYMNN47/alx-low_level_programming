#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers
 *
 * @a: an array of ints
 * @b: the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int *b)
{
	int i, g, h;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
