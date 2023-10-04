#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: string
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, q;
	char *p;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	p = malloc((sz1 + sz2) *sizeof(char) + 1);
	if (p == 0)
		return (0);
	for (q = 0; q <= sz1 + sz2; q++)
	{
		if (q < sz1)
			p[q] = s1[q];
		else
			p[q] =s2[q - sz1];
	}
	p[q] = '\0';
	return (p);
}
