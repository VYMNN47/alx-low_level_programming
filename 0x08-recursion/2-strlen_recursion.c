#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int ntr = 0;

	if (*s > '\0')
	{
		ntr = ntr + _strlen_recursion(s + 1) + 1;
	}
	return
}
