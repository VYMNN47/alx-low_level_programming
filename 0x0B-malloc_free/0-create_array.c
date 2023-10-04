#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @c: char
 * @size: size of the array
 *
 * Return:  a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
		return (0);

	while (size--)
		p[size] = c;

	return (p);
}
