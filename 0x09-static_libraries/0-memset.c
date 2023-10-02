#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 *
 * @b: const
 * @n: max bytes
 * @s: pointer for the const
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int io;

	for (io = 0; n > 0; io++, n--)
	{
		s[io] = b;
	}
	return (s);
}
