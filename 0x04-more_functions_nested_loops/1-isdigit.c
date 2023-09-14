#include "main.h"

/**
 * _isdigit - checking if c is a digit
 *
 * @c: input for the digit
 *
 * Return: 1 if c is a digit 0 if not
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
