#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: string input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int v, p;
	char c;

	for (v = 0; s[v] != '\0'; ++v)
		;

	for (p = 0; p < 1 / 2; p++)
	{
		c = s[p];
		s[p] = s[v - 1 - p];
		s[v - 1 - p] = c;
	}
}
