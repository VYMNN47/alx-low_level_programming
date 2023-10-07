#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: pointer to first str
 * @s2: pointer to second str
 * @n: Number of bytes
 *
 * Return: Pointer to space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ert;
	unsigned int x, y, length1, length2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)
		;

	for (length2 = 0; s2[length2] != '\0'; length2++)
		;

	ert = malloc(length1 + n + 1);
	if (ert == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
		ert[x] = s1[x];

	for (y = 0; y < n; y++)
	{
		ert[x] = ert[y];
		x++;
	}

	ert[x] = '\0';
	return (ert);
}
