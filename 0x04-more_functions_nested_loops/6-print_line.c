#include "main.h"

/**
 * print_line - func that prints a line
 *
 * @n: is the number of times
 * the _ char should be printed
*/

void print_line(int n)
{
	int lnv;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnv = 1; lnv <= n; lnv++)
			_putchar(95);
		_putchar('\n');
	}
}
