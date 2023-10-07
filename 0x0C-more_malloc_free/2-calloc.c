#include "main.h"

/**
 * *_memset - fills memory with bytes
 *
 * @b: const
 * @n: max bytes to use
 * @s: pointer
 *
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;

	return (p);
}


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

	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
