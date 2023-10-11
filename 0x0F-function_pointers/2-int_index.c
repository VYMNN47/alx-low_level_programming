#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: int array
 * @size: array size
 * @cmp: cmp func
 *
 * Return: the int index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int e = 0;

	if (array && size && cmp)
		while (e < size)
		{
			if (cmp(array[e]))
				return (e);
			e++;
		}
	return (-1);
}
