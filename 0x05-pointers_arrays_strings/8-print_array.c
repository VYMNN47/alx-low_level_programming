#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 *
 * @a: string input
 * @n: elements input
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int w;

	for (w = 0; w < n; w++)
	{
		if (w != (n - 1))
			printf("%i, ", a[w]);
		else
			printf("%i", a[w]);
	}
	printf("\n");
}
