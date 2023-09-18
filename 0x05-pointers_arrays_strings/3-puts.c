#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str : string to print
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
