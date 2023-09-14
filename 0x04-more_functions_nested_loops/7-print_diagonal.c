#include "main.h"

/**
 * print_diagonal - func that prints a diagonal line
 *
 * @n: is the number of times
 * the \ character should be printed
*/

void print_diagonal(int n)
{
	int uni, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (uni = 1; uni <= n; uni++)
		{
			for (sp = 1; sp <= uni; uni++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
