#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an
 * unsigned int
 *
 * @b: the binary number
 *
 * Return: the converted number, or 0 in other case
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		n = n * 2 + (*b++ - '0');
	}
	return (n);
}
