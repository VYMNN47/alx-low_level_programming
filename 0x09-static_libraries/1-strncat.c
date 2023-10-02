#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: pointer input
 * @n: most number of bytes from @src
 * @src: pointer to source input
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int p, i;

	p = 0;

	while (dest[p])
		p++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[p + i] = src[i];

	dest[p + i] = '\0';

	return (dest);
}
