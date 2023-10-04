#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - the length of the str
 * @s: string
 * Return: int
*/

int _strlen(char *s)
{
	int sz = 0;

	for (; s[sz] != '\0'; sz++)
	;
	return (sz);
}

/**
 * *argstostr - a function that concatenates all
 * the arguments of your program
 * @av: arg
 * @ac: int
 * Return: str
*/

char *argstostr(int ac, char **av)
{
	int w = 0, nw = 0, erti = 0, t = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; w < ac; w++, nw++)
		nw = nw + _strlen(av[w]);

	p = malloc(sizeof(char) * nw + 1);
	if (p == 0)
		return (NULL);

	for (w = 0; w < ac; w++)
	{
		for (t = 0; av[w][t] != '\0'; t++, erti++)
			p[erti] = av[w][t];

		p[erti] = '\n';
		erti++;
	}
	p[erti] = '\0';
	return (p);
}
