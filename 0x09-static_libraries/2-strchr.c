#include "main.h"

/**
 * *_strchr - a function that gets the length of a prefix substring
 *
 * @c: const
 * @s: pointer
 *
 * Return: s
*/

char *_strchr(char *s, char c)
{
	int ert;

	for (ert = 0; s[ert] >= '\0'; ert++)
	{
		if (s[ert] == c)
		{
			return (s + ert);
		}
	}
	return ('\0');
}
