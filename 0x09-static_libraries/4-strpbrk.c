#include "main.h"

/**
 * _strpbrk - a function that searches a string
 * for any of a set of bytes
 *
 * @accept: string to match
 * @s: string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *  or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int ert, op;
	char *p;

	ert = 0;
	while (s[ert] != '\0')
	{
		op = 0;
		while (accept[op] != '\0')
		{
			if (accept[op] == s[ert])
			{
				p = &s[ert];
				return (p);
			}
			op++;
		}
		ert++;
	}
	return (0);
}

