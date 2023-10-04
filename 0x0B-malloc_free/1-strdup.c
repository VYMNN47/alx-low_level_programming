#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter
 *
 * @str: string
 *
 * Return: 0
*/

char *_strdup(char *str)
{
	int a = 0, sz = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	for (str [sz] != '\0'; sz++)
	;

       	a = malloc(sz * sizeof(*str) + 1);

	if (a == 0)
	{
		return (NULL);
	}
	else
	{
		for (i < sz; i++)
			a[i] = str[i];
	}
	return (a);
}
