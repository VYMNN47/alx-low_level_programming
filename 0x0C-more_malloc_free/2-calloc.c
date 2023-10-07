#include "main.h"

/**
 * *_calloc - a function that allocates memory for an array, using malloc
 *
 * @size: size of each element
 * @nmemb: array length
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (p);
}
