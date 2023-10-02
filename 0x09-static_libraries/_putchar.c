#include <unistd.h>
#include "main.h"
#include <stdio.h>


/**
 * _putchar : writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Success)
 * -1 (Error)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
