#include "main.h"

/**
 * print_numbers - print 0 - 9
 * only using _putchar 2 times
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar(digit + '0');
	}
	_putchar ('\n');
}
