#include "main.h"

/**
 * _strspn - a function that gets the length
 * of a prefix substring
 *
 * @s: string
 * @accept: bytes
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ert, io;

	for (ert = 0; s[ert] != '\0'; ert++)
	{
		for (io = 0; s[io] != s[ert]; io++)
		{
			if (accept[io] == '\0')
				return (ert);
		}
	}
	return (ert);
}
