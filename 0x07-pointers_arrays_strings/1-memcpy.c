#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 *
 * @n: The lenght of src
 * @src: source
 * @dest: memory
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int pp;

	for (pp = 0; pp < n; pp++)
	{
		dest[pp] = src[pp];
	}
	return (dest);
}
